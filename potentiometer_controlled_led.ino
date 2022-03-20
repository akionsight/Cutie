int delayTime = 500;
int readPin = A2;
int readVal;
float V2;
int ledPin = 3;
float ledVal;


void setup () {
  
  pinMode(readPin, INPUT);
  pinMode(ledPin, OUTPUT);
  
  Serial.begin(9600);
  
}

void loop () {

//  digitalWrite(9, HIGH);
  
  readVal = analogRead(readPin);

  V2 = (5./1023.)  * readVal;

  Serial.print("Potentiometer Voltage is ");
  Serial.println(V2);

  ledVal = (255. / 1023.)* readVal;

  Serial.print("Led value is ");
  Serial.println(ledVal);

  analogWrite(ledPin, ledVal);
  
//  delay(delayTime);
   
}
