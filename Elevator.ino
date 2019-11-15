#include <SegmentDisplay_CD4511B.h>
#include <Bounce2.h>

SegmentDisplay_CD4511B CD4511(13, 14, 2, 3, 1);

#define LED1 4
#define LED2 5
#define LED3 6
#define LED4 7
#define LED5 8

int LEDS[] = {LED1, LED2, LED3, LED4, LED5};

#define BTN_1 9
#define BTN_2 10
#define BTN_3 11
#define BTN_4 12
#define BTN_5 15
#define BTN_6 16

Bounce btn1 = Bounce();
Bounce btn2 = Bounce();
Bounce btn3 = Bounce();
Bounce btn4 = Bounce();
Bounce btn5 = Bounce();
Bounce btn6 = Bounce();

unsigned long int time;

int Floor = 0;
int travel = 2000;
int next = 0;

bool clicked[5];
bool Put = false;
int row[6];

bool up = true;
bool get_time = false;

int i;

int number;

bool reset = false;

void setup() {
  row[0] = 0;
  for (i = 1; i < 6; i++) {
    row[i] = -1;
  }
  next = row[0];

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
  pinMode(BTN_6, INPUT_PULLUP);

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

  btn6.attach(BTN_6);
  btn6.interval(5);

  time = millis();
}

void loop() {
  btn6.update();

  if (btn6.fell()) {
    if (!reset) reset = true;
    else reset = false;
  }

  if (!reset) {
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
    if (clicked[0] || clicked[1] || clicked[2] || clicked[3] || clicked[4])
    {
      if (!get_time) {
        time = millis();
        get_time = true;
      }
    }

    if (up && Floor != next) {
      if (millis() - time > travel) {
        Floor++;
        time = millis();
        if (Floor == next) {
          clicked[Floor] = false;
          Move();
          if (row[1] < Floor) next = row[1];
          else
          {
            next = row[0];
            for(i = 2; i < 6;i++)
            {
              if(Floor > row[i])
                next = row[i];
                row[i] = -1;
                bubbleSort();
                up = false;
                break;
            }
          }
        }
      }
    }

    if (!up && Floor != next) {
      if (millis() - time > travel) {
        Floor--;
        time = millis();
        if (Floor == next) {
          clicked[Floor] = false;
          Move();
          if(row[1] < Floor) next = row[1];
          else
          {
            next = row[0];
            for(i = 2; i < 6;i++)
            {
              if(Floor > row[i])
                next = row[i];
                row[i] = -1;
                bubbleSort();
                break;
            }
          }
        }
      }
    }

    if (!clicked[0] && !clicked[1] && !clicked[2] && !clicked[3] && !clicked[4]) {
      get_time = false;
    }

    if(Floor == 0) up = true;

    number = Floor;
    CD4511.showNumber(number);
  }
  else
  {
    for (i = 0; i < 6; i++) {
      if(i != 0)row[i] = -1;
      if(i != 5)clicked[i] = false;
      Floor = 0;
      next = row[0];
      up = true;
      get_time = false;
    }
  }
}
