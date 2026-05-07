#include<Servo.h>

int pin = 6;
Servo myServo;

void setup(){

myServo.attach(pin);
  
}

void loop(){
  myServo.write(0);
  delay(1000);

  myServo.write(90);
  delay(1000);

  myServo.write(180);
  delay(1000);
  
}
