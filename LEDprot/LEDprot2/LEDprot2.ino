    #include <HCSR04.h>
    HCSR04 hc (6, 10);
    int red = 12;
    int blue = 2;
    float D;
    void setup (){
      pinMode (blue, OUTPUT);
      pinMode(red, OUTPUT);
      Serial.begin(9600);
    }

    void loop (){
      D = hc.dist();
      Serial.println(D);
      for (D > 3.00; D <= 30.00; D++){
        digitalWrite(red, HIGH);
        digitalWrite(blue, LOW);
      }
      for (D > 30.00; D = 100.00; D++){
        digitalWrite(red, LOW);
        digitalWrite(blue, HIGH);
      }
      if (D > 100.00){
        digitalWrite(red, LOW);
        digitalWrite(blue, LOW);
      }
    }
