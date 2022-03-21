int redPin = 6;
int greenPin = 9;
int bluePin = 11;
int red;
int blue;
int green;
String msg = "Enter Red";
String msg3 = "Enter Blue";
String msg2 = "Enter Green";

int wait = 5000;


void setup () {

   pinMode(redPin, OUTPUT);
   pinMode(bluePin, OUTPUT);
   pinMode(greenPin, OUTPUT);

   Serial.begin(9600);
 
}

void loop () {

  Serial.println(msg);
  
  while (Serial.available() == 0) {}

  red = Serial.parseInt();

  Serial.println(msg2);
  
  while (Serial.available() == 0) {}

  green = Serial.parseInt();

    Serial.println(msg3);
  
  while (Serial.available() == 0) {}

  blue = Serial.parseInt();

  Serial.println("Your colour is now on the LED");

  analogWrite(redPin, red);
  analogWrite(bluePin, blue);
  analogWrite(greenPin, green);
  
  delay(10000);
  
  
}
