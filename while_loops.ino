int potVal;
int potPin = A0;
int led = 3;
int delayTime = 100;


void setup () {

  Serial.begin(9600);
  
  pinMode(potPin, INPUT);
  pinMode(led, OUTPUT);
  
}

void loop () {

  potVal = analogRead(potPin);
  Serial.println(potVal);
  delay(delayTime);

  while (potVal>1000) {
    
      digitalWrite(led, HIGH);

      potVal = analogRead(potPin);

      Serial.println(potVal);

      delay(delayTime);
      
    }

  digitalWrite(led, LOW);
  
}
