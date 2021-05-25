#define YELLOW 11
int i=0, gap=1;

int led_anal_timer;

void led_anal_setup(){
  pinMode (YELLOW, OUTPUT);

  led_anal_timer= timer.setInterval(5, led_anal_loop);
  timer.disable(led_anal_timer);
}

void led_anal_loop(){
 /* for (int i=1;i<=255;i+=10)
  {
    analogWrite (YELLOW, i);
    delay (50);
  }
  for (int i=255;i>=0;i-=10){
    analogWrite (YELLOW, i);
    delay (50);
  }*/


  //Serial.print("i: ");
  //Serial.println(i);
  
  analogWrite (YELLOW, i);
  i += gap;
  if(i>=255){
  i=255;
  gap*=-1;
  }
  if(i<=0)
  {
  i=1;
  gap*=-1;
  }
  //delay (5);
}
