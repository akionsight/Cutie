String userLed;
String msg = "Which Led would you like to light up";
int blueLed = 3;
int redLed = 8;
int greenLed = 11;
int wait = 2000;
String errorMessage = "Not a valid colour";


void setup () {

  Serial.begin(9600);
  
  pinMode(blueLed, OUTPUT);
  pinMode(redLed, OUTPUT);
  pinMode(greenLed, OUTPUT);
  
}

void loop () {

  Serial.println(msg);

  while (Serial.available() == 0) {}

  userLed = Serial.readString();

  userLed.toLowerCase();

  if (userLed == "blue") {
    
    digitalWrite(blueLed, HIGH);
    delay(wait);
    digitalWrite(blueLed, LOW);
    
   }

    else if (userLed == "green") {
    
    digitalWrite(greenLed, HIGH);
    delay(wait);
    digitalWrite(greenLed, LOW);
    
   }

   else if (userLed == "red") {
    
    digitalWrite(redLed, HIGH);
    delay(wait);
    digitalWrite(redLed, LOW);
    
   }

   else {

    Serial.println(errorMessage);
    
    }
  

  
  
}
