//base

#include <SimpleTimer.h>

  SimpleTimer timer;


void setup() {
  Serial.begin(9600);
  
  led_digi_setup_1();
  led_anal_setup();
  sound_setup();
  ultra_setup();
  servo_setup();
  ultra_servo_setup();
  buzzer_setup();
  serial_setup();
}

void loop() {
  timer.run();
  //sound_loop();
  //ultra_loop();
  
  //led_digi_loop();
  //led_digi_loop_1();
  //led_anal_loop();
  //servo_loop();
  //ultra_servo_loop();
  //buzzer_loop();
  serial_loop();
}
