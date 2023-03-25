int trigPin = 8;
int echoPin = 7;
int travelTime;


void setup(){
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
}

void loop(){
  digitalWrite(trigPin, LOW);
  delayMicroseconds(10);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  travelTime = pulseIn(echoPin, HIGH);
  delay(25);
  Serial.println(travelTime);
}
