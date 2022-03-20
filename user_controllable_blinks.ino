int numBlinks;
String msg = "How many blinks do you want? ";
int led = 3;
int i;
int blinkDelay = 500;

void setup () {

  Serial.begin(9600);
  pinMode(led, OUTPUT);
  
}

void loop () {

//  digitalWrite(led, HIGH);

  
  Serial.println(msg);

  while (Serial.available() == 0) {}

  numBlinks = Serial.parseInt();

  for (i=1; i<=numBlinks; i++) {
    
     digitalWrite(led, HIGH);
     delay(blinkDelay);
     digitalWrite(led, LOW);
     delay(blinkDelay);
    
    }
  
}
