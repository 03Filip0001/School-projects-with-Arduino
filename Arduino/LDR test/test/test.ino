#include <LDR.h>

LDR displej(2,3,4,5,6,7,8);

long unsigned int time1; 

bool next = false;

void setup() {
  displej.Setup();
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);

  digitalWrite(9, HIGH);
  digitalWrite(10, LOW);
  digitalWrite(11, HIGH);
  digitalWrite(12, LOW);

  time1 = millis();
}

void loop() {

  if(millis() - time1 > 1000)
  {
    next != next;
  }
  
  digitalWrite(9, HIGH);
  digitalWrite(10, LOW);
  digitalWrite(11, HIGH);
  digitalWrite(12, LOW);
  
  displej.showNumber(0);

  delay(100);

  digitalWrite(9, LOW);
  digitalWrite(10, HIGH);
  digitalWrite(11, LOW);
  digitalWrite(12, HIGH);

  displej.showInvNumber(0);

  delay(100);

  digitalWrite(9, HIGH);
  digitalWrite(10, LOW);
  digitalWrite(11, HIGH);
  digitalWrite(12, LOW);
  
  displej.showNumber(1);

  delay(100);

  digitalWrite(9, LOW);
  digitalWrite(10, HIGH);
  digitalWrite(11, LOW);
  digitalWrite(12, HIGH);

  displej.showInvNumber(1);

  delay(100);
}
