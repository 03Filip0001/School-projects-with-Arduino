#include <Bounce2.h>
#include <SevSeg.h>

#define LED1 7
#define LED2 8
#define LED3 9
#define LED4 10
#define LED5 11

int LEDS[] = {LED1, LED2, LED3, LED4, LED5};

#define BTN_1 6
#define BTN_2 5
#define BTN_3 4
#define BTN_4 3
#define BTN_5 2
#define BTN_6 A6

Bounce btn1 = Bounce();
Bounce btn2 = Bounce();
Bounce btn3 = Bounce();
Bounce btn4 = Bounce();
Bounce btn5 = Bounce();

SevSeg sevseg;

byte numDigits = 1;
byte digitPins[] = {14, 15, 16};
byte segmentPins[] = {17, 18, 19, 1, 0, 12, 13};
bool resistorsOnSegments = true;
bool updateDelays = false;
bool leading = false;
byte hardwareConfig = COMMON_CATHODE;

unsigned long int time;

bool floor0 = false;
bool floor1 = false;
bool floor2 = false;
bool floor3 = false;
bool floor4 = false;

int Floor = 0;
int travel = 2000;
int next;

bool clicked[5];
bool Put = false;
int row[5];

bool up = true;
bool get_time = false;

int i;

int number;

void setup() {
 

  for (i = 0; i < 5; i++) {
    row[i] = -1;
  }

  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(LED5, OUTPUT);

  pinMode(BTN_1, INPUT_PULLUP);
  pinMode(BTN_2, INPUT_PULLUP);
  pinMode(BTN_3, INPUT_PULLUP);
  pinMode(BTN_4, INPUT_PULLUP);
  pinMode(BTN_5, INPUT_PULLUP);

  sevseg.begin(hardwareConfig, numDigits, digitPins, segmentPins, resistorsOnSegments, updateDelays, leading);
  sevseg.setBrightness(90);

  btn1.attach(BTN_1);
  btn1.interval(5);

  btn2.attach(BTN_2);
  btn2.interval(5);

  btn3.attach(BTN_3);
  btn3.interval(5);

  btn4.attach(BTN_4);
  btn4.interval(5);

  btn5.attach(BTN_5);
  btn5.interval(5);

  time = millis();
}

void loop() {
  btn1.update();
  btn2.update();
  btn3.update();
  btn4.update();
  btn5.update();

  if (btn1.fell()) {
    clicked[0] = true;
    sort(0);
  }

  if (btn2.fell()) {
    clicked[1] = true;
    sort(1);
  }

  if (btn3.fell()) {
    clicked[2] = true;
    sort(2);
  }

  if (btn4.fell()) {
    clicked[3] = true;
    sort(3);
  }

  if (btn5.fell()) {
    clicked[4] = true;
    sort(4);
  }

  ledsOn();
  next = row[0];

  if (next != -1) {
    if (up) {
      if (clicked[0] || clicked[1] || clicked[2] || clicked[3] || clicked[4]) {
        if (!get_time) {
          time = millis();
          get_time = true;
        }
      }
      if (millis() - time > travel) {
        Floor++;
        time = millis();
        if (Floor == next) {
          clicked[Floor] = false;
          Move();
          next = row[0];
        }
      }
    }

    if (!up) {
      if (clicked[0] || clicked[1] || clicked[2] || clicked[3] || clicked[4]) {
        if (!get_time) {
          time = millis();
          get_time = true;
        }
      }
      if (millis() - time > travel) {
        Floor--;
        time = millis();
        if (Floor == next) {
          clicked[Floor] = false;
          Move();
          next = row[0];
        }
      }
    }
  }
  
  if (!clicked[0] && !clicked[1] && !clicked[2] && !clicked[3] && !clicked[4]) {
    get_time = false;
  }

  if (next > Floor) up = true;
  else up = false;

  number = Floor;
  sevseg.setNumber(number);
  for(i = 0;i < 50;i++){
  sevseg.refreshDisplay();
  }
}
