#include <HC595.h>

const int chipCount = 2;
const int clockPin = 2;
const int latchPin = 3;
const int dataPin = 4;

HC595 ledArray(chipCount, latchPin, clockPin, dataPin);

int lastPin = ledArray.lastPin() - 4;

String bin;

String bin0, bin1, bin2,bin3,bin4,bin5,bin6,bin7,bin8,bin9,bin10,bin11;

int wait = 25;

void Num1(){
  ledArray.setPin(11, bin.toInt());
  delay(wait);
}

void Num2(){
   bin0 = bin[0];
   bin1 = bin[1];
   ledArray.setPin(11, bin1.toInt());
   ledArray.setPin(10, bin0.toInt());
   delay(wait);
}

void Num3(){
   bin0 = bin[0];
   bin1 = bin[1];
   bin2 = bin[2];
   ledArray.setPin(11, bin2.toInt());
   ledArray.setPin(10, bin1.toInt());
   ledArray.setPin(9, bin0.toInt());
   delay(wait);
}

void Num4(){
   bin0 = bin[0];
   bin1 = bin[1];
   bin2 = bin[2];
   bin3 = bin[3];
   ledArray.setPin(11, bin3.toInt());
   ledArray.setPin(10, bin2.toInt());
   ledArray.setPin(9, bin1.toInt());
   ledArray.setPin(8, bin0.toInt());
   delay(wait);
}

void Num5(){
   bin0 = bin[0];
   bin1 = bin[1];
   bin2 = bin[2];
   bin3 = bin[3];
   bin4 = bin[4];
   ledArray.setPin(11, bin4.toInt());
   ledArray.setPin(10, bin3.toInt());
   ledArray.setPin(9, bin2.toInt());
   ledArray.setPin(8, bin1.toInt());
   ledArray.setPin(7, bin0.toInt());
   delay(wait);
}

void Num6(){
   bin0 = bin[0];
   bin1 = bin[1];
   bin2 = bin[2];
   bin3 = bin[3];
   bin4 = bin[4];
   bin5 = bin[5];
   ledArray.setPin(11,bin5.toInt());
   ledArray.setPin(10, bin4.toInt());
   ledArray.setPin(9, bin3.toInt());
   ledArray.setPin(8, bin2.toInt());
   ledArray.setPin(7, bin1.toInt());
   ledArray.setPin(6, bin0.toInt());
   delay(wait);
}

void Num7(){
   bin0 = bin[0];
   bin1 = bin[1];
   bin2 = bin[2];
   bin3 = bin[3];
   bin4 = bin[4];
   bin5 = bin[5];
   bin6 = bin[6];
   ledArray.setPin(11,bin6.toInt());
   ledArray.setPin(10,bin5.toInt());
   ledArray.setPin(9, bin4.toInt());
   ledArray.setPin(8, bin3.toInt());
   ledArray.setPin(7, bin2.toInt());
   ledArray.setPin(6, bin1.toInt());
   ledArray.setPin(5, bin0.toInt());
   delay(wait);
}

void Num8(){
   bin0 = bin[0];
   bin1 = bin[1];
   bin2 = bin[2];
   bin3 = bin[3];
   bin4 = bin[4];
   bin5 = bin[5];
   bin6 = bin[6];
   bin7 = bin[7];
   ledArray.setPin(11,bin7.toInt());
   ledArray.setPin(10,bin6.toInt());
   ledArray.setPin(9,bin5.toInt());
   ledArray.setPin(8, bin4.toInt());
   ledArray.setPin(7, bin3.toInt());
   ledArray.setPin(6, bin2.toInt());
   ledArray.setPin(5, bin1.toInt());
   ledArray.setPin(4, bin0.toInt());
   delay(wait);
}

void Num9(){
   bin0 = bin[0];
   bin1 = bin[1];
   bin2 = bin[2];
   bin3 = bin[3];
   bin4 = bin[4];
   bin5 = bin[5];
   bin6 = bin[6];
   bin7 = bin[7];
   bin8 = bin[8];
   ledArray.setPin(11, bin8.toInt());
   ledArray.setPin(10,bin7.toInt());
   ledArray.setPin(9,bin6.toInt());
   ledArray.setPin(8,bin5.toInt());
   ledArray.setPin(7, bin4.toInt());
   ledArray.setPin(6, bin3.toInt());
   ledArray.setPin(5, bin2.toInt());
   ledArray.setPin(4, bin1.toInt());
   ledArray.setPin(3, bin0.toInt());
   delay(wait);
}

void Num10(){
   bin0 = bin[0];
   bin1 = bin[1];
   bin2 = bin[2];
   bin3 = bin[3];
   bin4 = bin[4];
   bin5 = bin[5];
   bin6 = bin[6];
   bin7 = bin[7];
   bin8 = bin[8];
   bin9 = bin[9];
   ledArray.setPin(11, bin9.toInt());
   ledArray.setPin(10, bin8.toInt());
   ledArray.setPin(9,bin7.toInt());
   ledArray.setPin(8,bin6.toInt());
   ledArray.setPin(7,bin5.toInt());
   ledArray.setPin(6, bin4.toInt());
   ledArray.setPin(5, bin3.toInt());
   ledArray.setPin(4, bin2.toInt());
   ledArray.setPin(3, bin1.toInt());
   ledArray.setPin(2, bin0.toInt());
   delay(wait);
}

void Num11(){
   bin0 = bin[0];
   bin1 = bin[1];
   bin2 = bin[2];
   bin3 = bin[3];
   bin4 = bin[4];
   bin5 = bin[5];
   bin6 = bin[6];
   bin7 = bin[7];
   bin8 = bin[8];
   bin9 = bin[9];
   bin10 = bin[10];
   ledArray.setPin(11, bin10.toInt());
   ledArray.setPin(10, bin9.toInt());
   ledArray.setPin(9, bin8.toInt());
   ledArray.setPin(8,bin7.toInt());
   ledArray.setPin(7,bin6.toInt());
   ledArray.setPin(6,bin5.toInt());
   ledArray.setPin(5, bin4.toInt());
   ledArray.setPin(4, bin3.toInt());
   ledArray.setPin(3, bin2.toInt());
   ledArray.setPin(2, bin1.toInt());
   ledArray.setPin(1, bin0.toInt());
   delay(wait);
}

void Num12(){
   bin0 = bin[0];
   bin1 = bin[1];
   bin2 = bin[2];
   bin3 = bin[3];
   bin4 = bin[4];
   bin5 = bin[5];
   bin6 = bin[6];
   bin7 = bin[7];
   bin8 = bin[8];
   bin9 = bin[9];
   bin10 = bin[10];
   bin11 = bin[11];
   ledArray.setPin(11, bin11.toInt());
   ledArray.setPin(10, bin10.toInt());
   ledArray.setPin(9, bin9.toInt());
   ledArray.setPin(8, bin8.toInt());
   ledArray.setPin(7,bin7.toInt());
   ledArray.setPin(6,bin6.toInt());
   ledArray.setPin(5,bin5.toInt());
   ledArray.setPin(4, bin4.toInt());
   ledArray.setPin(3, bin3.toInt());
   ledArray.setPin(2, bin2.toInt());
   ledArray.setPin(1, bin1.toInt());
   ledArray.setPin(0, bin0.toInt());
   delay(wait);
}

void setup() {
  ledArray.reset();

}

void loop() {
  for (int i = 0; i <= 4095; i++)
  {
    bin = String(i, BIN);

    ledArray.reset();

    if (i <= 1) {
      Num1();
    }
    else if(i <= 3){
      Num2();
    }
    else if(i <= 7){
      Num3();
    }
    else if(i <= 15){
      Num4();
    }
    else if(i <= 31){
      Num5();
    }
    else if(i <= 63){
      Num6();
    }
    else if(i <= 127){
      Num7();
    }
    else if(i <= 255){
      Num8();
    }
    else if(i <= 511){
      Num9();
    }
    else if(i <= 1023){
      Num10();
    }
    else if(i <= 2047){
      Num11();
    }
    else if(i <= 4095){
      Num12();
    }
}
}
