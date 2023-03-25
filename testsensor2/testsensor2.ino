int trigPin = 7;
int echoPin = 8;
int travelTime;
float distanceToTarget;

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
  travelTime = pulseIn (echoPin, HIGH);
  delay(25);
  distanceToTarget = (travelTime * 0.034)/2;
  Serial.println(distanceToTarget);
}
