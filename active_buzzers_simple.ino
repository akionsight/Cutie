int number;
int buzzPin = 7;
int wait = 2000;
int potPin = A0;
int potVal;

void setup () {
  
  pinMode(buzzPin, OUTPUT);
  pinMode(potPin, INPUT);
  Serial.begin(9600);
}

void loop () {

  potVal = analogRead(potPin);

  Serial.println(potVal);

  if (potVal>1000) {

    digitalWrite(buzzPin, HIGH);
    
    }
  else {
    
    digitalWrite(buzzPin, LOW);  
    
    }



}
