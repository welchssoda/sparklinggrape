#define RED 13
#define GREEN 12

int led_digi_timer;

void led_digi_setup_1(){
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);

  led_digi_timer = timer.setInterval(500, led_digi_loop_1);
  timer.disable(led_digi_timer);

  //digitalWrite(RED, HIGH);
  //digitalWrite(GREEN, LOW);
}

void led_digi_loop_1(){
  digitalWrite(RED, digitalRead(RED)^1);
  digitalWrite(GREEN, digitalRead(GREEN)^1);
  //delay(500);
}
