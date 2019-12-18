#include <Bounce2.h>

#define ENB 8
#define LED 9
#define BTN 10

Bounce btn = Bounce();

bool ON = false;

byte ON_SLAVE;

void setup() {
  Serial.begin(9600);  

  pinMode(LED, OUTPUT);
  pinMode(BTN, INPUT_PULLUP);
  btn.attach(BTN);
  btn.interval(5);

  pinMode(ENB, OUTPUT);
  digitalWrite(ENB, LOW);

  delay(500);
}

void loop() {
  btn.update();
  
  digitalWrite(ENB, HIGH);
  if(btn.fell())
  {
    ON = !ON;
  }
  
  if(ON)
    {
      ON = !ON;
      Serial.write(0xFF);
      Serial.flush();
    }
    else
    {
      ON = !ON;
      Serial.write(0x00);
      Serial.flush();
    }
  digitalWrite(ENB, LOW);
  delay(1);
  if(Serial.available())
  {
    if(Serial.read() == 0xFF)
    {
      digitalWrite(LED, HIGH);
    }
    else  digitalWrite(LED, LOW);
  }
}
