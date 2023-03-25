#include <LiquidCrystal.h>
#include <HCSR04.h>

LiquidCrystal lcd (1,2,4,5,6,7);
HCSR04 hc (9,10);

void setup(){
  lcd.begin(16,2);
}

void loop (){
  lcd.setCursor (0, 0);
  lcd.print ("Distance: ");
  lcd.print (hc.dist());
  lcd.print (" cm");
  delay (200);
}
