int notes[] = {262, 294, 330, 349, 392, 440, 494, 523};

void setup(){
  Serial.begin(9600);
}

void loop(){
  int keyVal = analogRead(A0);
  Serial.println(keyVal);
 
  if(keyVal == 1023){
    tone(8, notes[0]); //C
  }
  else if(keyVal >=999 && keyVal <= 1022){
    tone(8, notes[1]); // D
  }
  else if(keyVal >= 960 && keyVal <= 998){
    tone(8, notes[2]); //E
  }
  else if(keyVal >= 900  && keyVal <= 959){
    tone(8, notes[3]); // F
  }
  else if(keyVal >= 520 && keyVal <= 715){
    tone(8,notes[4]); //G
  }
  else if(keyVal >= 509 && keyVal <= 515){
    tone(8, notes[5]); //A
  }
  else if(keyVal >= 505 && keyVal <= 508){
    tone(8,notes[6]); //B
  }
  else if(keyVal >= 5 && keyVal <= 10){
    tone(8, notes[7]); // C5
  }
  else{
    noTone(8);
    //tone(8, notes[0]);
  }
  
  
  delay(50);
}
