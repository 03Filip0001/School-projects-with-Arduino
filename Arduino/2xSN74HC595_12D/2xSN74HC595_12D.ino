#include <HC595.h>

const int chipCount = 2;
const int clockPin = 2;
const int latchPin = 3;
const int dataPin = 4;

HC595 ledArray(chipCount, latchPin, clockPin, dataPin);

int lastPin = ledArray.lastPin() - 4;

void setup() {
  ledArray.reset();

}

void loop() {
  for (int i = 0; i <= 4095; i++)
  {
    for(int j = 0; j < 16;j++){
          if (i & (0 << j)) ledArray.setPin(j,1);
          else ledArray.setPin(j,1);
}
delay(500);
}
}
