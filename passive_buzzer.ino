int buzzPin = 7;
int potPin = A5;
int potVal;
int buzzVal;

void setup () {
  
  pinMode(buzzPin, OUTPUT);
  Serial.begin(9600);
  
}

void loop () {

  potVal = analogRead(potPin);

//  Serial.println(potVal);

  buzzVal = (994./1023.) * potVal + 60;

  digitalWrite(buzzPin, HIGH);
  delayMicroseconds(buzzVal);
  digitalWrite(buzzPin, LOW);
  delayMicroseconds(buzzVal);

  Serial.println(buzzVal);

}
