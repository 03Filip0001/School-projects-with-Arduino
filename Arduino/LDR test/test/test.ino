#include <LDR.h>

LDR displej(2,3,4,5,6,7,8,9,10,11,12);

void setup() {
  displej.Setup();
}

void loop() {
  displej.showNumber(1);
}
