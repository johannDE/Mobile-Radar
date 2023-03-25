#include <HCSR04.h>
#include <Servo.h>
#include <LiquidCrystal.h>

Servo myServo;
HCSR04 hc (10, 11);
LiquidCrystal lcd (1, 2, 3, 4, 5, 6, 7);

int i = 0;
float D;

void setup(){
  lcd.begin(16,2);
  myServo.attach(8);
}
void loop(){
  lcd.setCursor (0, 0);
  D = hc.dist();

  for (i = 0; i <= 180; i++){
    myServo.write(i);
    delay (30);
    lcd.print ("Distance: ");
    lcd.print (D);
    lcd.print(" cm");
    delay (10);
  }
  for (i = 180; i > 0; i--){
    myServo.write(i);
    delay(30);
    lcd.print("Distance: ");
    lcd.print(D);
    lcd.print(" cm");
    delay (10); 
  }
}
