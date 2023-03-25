#include <HCSR04.h>
#include <Servo.h>
#include <LiquidCrystal.h>

Servo myServo;
HCSR04 hc (10, 9);
LiquidCrystal lcd (1, 2, 4, 5, 6, 7);

int i = 0;

void setup (){
  lcd.begin(16, 2);
  myServo.attach(8);
}
void loop (){
  lcd.setCursor (0, 0);
  
  for (i = 0; i <=180; i++){
    myServo.write(i);
    delay (30);
    lcd.print("Distance: ");
    lcd.print(hc.dist());
    lcd.print(" cm");
    delay (10);
  }
  
  for (i = 180; i >= 0; i--){
    myServo.write (i);
    lcd.print ("Distance: ");
    lcd.print (hc.dist());
    lcd.print (" cm");
    delay (10);
  }
}
