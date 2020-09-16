#include <LiquidCrystal_I2C.h>
#include <Wire.h>

//Adresa za LEDd displej
#define LCD_ADDR  0x27
//Velicina displeja (20 x 4)
#define COLONS     20
#define ROWS       4

LiquidCrystal_I2C LCD(LCD_ADDR, COLONS, ROWS);

bool start = false;
int sensor = A5;
double time;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Wire.begin();
  LCD.begin();
  LCD.backlight();
  
  pinMode(sensor, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(analogRead(sensor) > 512 && start == false;)
  {
    time = millis();
    start = true;
    servo.write(90);
    LCD.setCursor(0, 0);
    LCD.print("Zemljiste je suvo!");
  }

  if(millis() - time > 1000 && start == true)
  {
    start = false;
    servo.write(0);
    Wire.begin();
    LCD.setCursor(0, 0);
    LCD.print("Zemljiste je vlazno!");
  }
}
