//3_sound

#define sound A1

int sound_timer;
void sound_setup(){
  for(i = 7; i<=13; i++)
   pinMode(i, OUTPUT);

sound_timer = timer.setInterval(100, sound_loop);
timer.disable(sound_timer);
}
void sound_loop(){
  for(i=7; i<=13; i++){
    digitalWrite(i, LOW);
  }
  Serial.println(analogRead(A1));
 // delay(500);
  int sound_check = map(analogRead(A1), 0, 800, 6, 14);
  Serial.println(sound_check);
  for(i = 7; i<=sound_check; i++){
    digitalWrite(i, HIGH);
  }
  //delay(500);
}
