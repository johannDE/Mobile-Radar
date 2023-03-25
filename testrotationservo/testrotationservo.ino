#include <Servo.h>

Servo myServo;

int i=0;

void setup() {
  myServo.attach(8);
}

void loop() {
  for (int i = 0; i <= 180; i++){
    myServo.write(i);
    delay(30);
  }
  for (i = 180; i > 0; i--){
    myServo.write(i);
    delay(30);
  }

}
