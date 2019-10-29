#include <HC595.h>

const int chipCount = 2;
const int clockPin = 3;
const int latchPin = 2;
const int dataPin = 4;

HC595 ledArray(chipCount, latchPin, clockPin, dataPin);

int lastPin = ledArray.lastPin() - 4;

void setup() {
  ledArray.reset();

}

void loop() {
  for (int i = 0; i <= 4095; i++)
  {
    for (int j = 0; j <= lastPin; j++) {
      if (i & (1 << j)) ledArray.setPin(j, 1);
      else ledArray.setPin(j, 0);
    }
    delay(25);
  }

  for (int i = 4095; i > 0; i--)
  {
    for (int j = 0; j <= lastPin; j++) {
      if (i & (1 << j)) ledArray.setPin(j, 1);
      else ledArray.setPin(j, 0);
    }
    delay(25);
  }
}
