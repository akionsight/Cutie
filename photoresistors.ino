int lightPin = A0;
int lightVal;
int blueLed = 7;
int redLed = 9;


void setup () {
  
  pinMode(lightPin, INPUT);
  pinMode(blueLed, OUTPUT);
  pinMode(redLed, OUTPUT);
  
  Serial.begin(9600);
  
}

void loop () {

  lightVal = analogRead(lightPin);

  Serial.println(lightVal);

  if (lightVal > 400) {

    digitalWrite(blueLed, HIGH);
    digitalWrite(redLed, LOW);
    
    }

  else {
    
    // lights are not ON

    digitalWrite(blueLed, LOW);
    digitalWrite(redLed, HIGH);
    
    }
}
