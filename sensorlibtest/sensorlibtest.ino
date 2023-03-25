#include <HCSR04.h>

HCSR04 hc(7, 8); 

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.println(hc.dist());
  delay(60);
}
