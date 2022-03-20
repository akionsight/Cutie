int redLed = 6;
int blueLed = 9;
int redTime = 500;
int blueTime = 500;
int redBlink = 4;
int blueBlink = 3;
int i;

void setup() {
  // put your setup code here, to run once:

  pinMode(redLed, OUTPUT);
  pinMode(blueLed, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  for (i=1; i<=redBlink; i++) { 
  
    digitalWrite(redLed, HIGH);
    delay(redTime);
    digitalWrite(redLed, LOW);
    delay(redTime);

  }

  for (i=1; i<= blueBlink; i++) {
    digitalWrite(blueLed, HIGH);
    delay(blueTime);
    digitalWrite(blueLed, LOW);
    delay(blueTime);
  }
  
}
