void sort(int num){
  Put = false;
  for(i = 1;i < 6;i++){
    if(row[i] == -1 && Put == false){
      row[i] = num;
      Put = true;
    }
  }
  bubbleSort();
}

void bubbleSort()
{
  int j = 6, k;

  while(j > 1)
  {
    for(k = 1; k < j - 1;k++)
    {
      if(row[k] < row[k + 1]) // 1 3
      {
        int pom = row[k]; // 1 3
        row[k] = row[k + 1]; // 3 3
        row[k + 1] = pom; // 3 1
      }
    }
    j--;
  }
}

void Move(){
  row[1] = row[2];
  row[2] = row[3];
  row[3] = row[4];
  row[4] = row[5];
  row[5] = -1;
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
