void sort(int num) {
  Put = false;
  for (i = 0; i < 5; i++) {
    if (row[i] == -1 && Put == false) {
      row[i] = num;
      Put = true;
      break;
    }
  }
}
void Move() {
  row[0] = row[1];
  row[1] = row[2];
  row[2] = row[3];
  row[3] = row[4];
  row[4] = -1;
}

void ledsOn(){
  for(i = 0; i< 5;i++){
    if(clicked[i]){
      digitalWrite(LEDS[i], HIGH);
    }
    else if(!clicked[i]){
      digitalWrite(LEDS[i], LOW);
    }
  }
}
