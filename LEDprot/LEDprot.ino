int trigPin = 7;
int echoPin = 8;
int blue = 2;
int red = 12;
int travelTime;
float distanceToTarget;

void setup(){
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(blue, OUTPUT);
  pinMode(red, OUTPUT);
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
  digitalWrite(blue, LOW);
  digitalWrite(red, LOW);
  distanceToTarget = (travelTime * 0.034)/2;
  Serial.println(distanceToTarget);
  if (distanceToTarget >= 30.0; distanceToTarget < 400.0){
    digitalWrite(blue, LOW);
    digitalWrite(red, HIGH);
  }
  if (distanceToTarget >= 2.00; distanceToTarget < 30.0){
    digitalWrite(blue, HIGH);
    digitalWrite(red, LOW);
  }
  }
