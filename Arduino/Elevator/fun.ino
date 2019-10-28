void sort(int num){
  for(i = 0;i < 5;i++){
    if(row[i] == NULL && Put == false){
      row[i] = num;
      Put = true;
    }
  }
}

void Move(){
  row[0] = row[1];
  row[1] = row[2];
  row[2] = row[3];
  row[3] = row[4];
  row[4] = NULL;
}

void ledsOn(){
  for(i = 0; i< 5;i++){
    if(clicked[i]){
      digitalWrite(LEDS[i], HIGH);
    }
  }
}
