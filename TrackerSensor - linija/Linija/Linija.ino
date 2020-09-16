

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(3, INPUT);
}

void loop() {
  system("cls");
  // put your main code here, to run repeatedly:
  if(digitalRead(3) == 0)
    Serial.println("Na putu sam");
  else
    Serial.println("Nisam na putu");
}
