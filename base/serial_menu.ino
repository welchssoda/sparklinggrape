//serial.menu

int input_menu=0;

void serial_setup(){
  show_menu();
}

void serial_loop(){
  if(Serial.available()>0){
    input_menu = Serial.read();

    if(input_menu !=char(10)) {
      Serial.print("사용자 선택: ");
      Serial.println(char(input_menu));
    }
  switch (input_menu){
    case '1':
      timer.enable(led_digi_timer);
      digitalWrite(RED, HIGH);
      digitalWrite(GREEN, LOW);
      timer.disable(led_anal_timer);
      timer.disable(ultra_timer);
      timer.disable(sound_timer);
      timer.disable(servo_timer);
      analogWrite(YELLOW, 0);
      servo.detach();
      timer.disable(buzzer_timer);
      i =0;
      break;
    case '2':
      timer.disable(led_digi_timer);
      digitalWrite(RED, LOW);
      digitalWrite(GREEN, LOW);
      timer.enable(led_anal_timer);
      i =0;
      timer.disable(sound_timer);
      timer.disable(ultra_timer);
      timer.disable(servo_timer);
      servo.detach();
      timer.disable(buzzer_timer);
      break;
    case '3':
      timer.disable(led_digi_timer);
      //digitalWrite(RED, HIGH);
      //digitalWrite(GREEN, LOW);
      timer.disable(led_anal_timer);
      analogWrite(YELLOW, 0);
      timer.enable(sound_timer);
      timer.disable(ultra_timer);
      timer.disable(servo_timer);
      servo.detach();
      timer.disable(buzzer_timer);
      i =0;
      break;
    case '4':
    timer.disable(led_digi_timer);
      //digitalWrite(RED, HIGH);
      //digitalWrite(GREEN, LOW);
      timer.disable(led_anal_timer);
      analogWrite(YELLOW, 0);
      timer.disable(sound_timer);
      timer.enable(ultra_timer);
      timer.disable(servo_timer);
      servo.detach();
      timer.disable(buzzer_timer);
      i =0;
      break;
    case '5':
    timer.disable(led_digi_timer);
      //digitalWrite(RED, HIGH);
      //digitalWrite(GREEN, LOW);
      timer.disable(led_anal_timer);
      analogWrite(YELLOW, 0);
      timer.disable(sound_timer);
      timer.disable(ultra_timer);
      servo.attach(servo_pin);
      timer.enable(servo_timer);
      timer.disable(buzzer_timer);
      i =0;
      break;
    case '6':
    timer.disable(led_digi_timer);
      //digitalWrite(RED, HIGH);
      //digitalWrite(GREEN, LOW);
      timer.disable(led_anal_timer);
      analogWrite(YELLOW, 0);
      timer.disable(sound_timer);
      timer.disable(ultra_timer);
      servo.detach(servo_pin);
      timer.disable(servo_timer);
      timer.enable(buzzer_timer);
      i =0;
      break;
    case '9':
      timer.disable(led_digi_timer);
      digitalWrite(RED, LOW);
      digitalWrite(GREEN, LOW);
      timer.disable(led_anal_timer);
      analogWrite(YELLOW, 0);
      timer.disable(sound_timer);
      timer.disable(ultra_timer);
      timer.disable(servo_timer);
      servo.detach();
      timer.disable(buzzer_timer);
      show_menu();
      i =0;
      break;
    case char(10):
      break;
    default:
    Serial.println("1부터6까지만 입력하세요");
  }
  }
}

void show_menu(){
  Serial.println("1. Digital Conotrol LED");
  Serial.println("2. Analog Conotrol LED");
  Serial.println("3. Sound led control");
  Serial.println("4. Ultra sensor control");
  Serial.println("5. Servo control");
  Serial.println("6. Buzzer Conotrol LED");
  Serial.println("9. All stop");
}
