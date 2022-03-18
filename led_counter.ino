int pin4 = 12;
int pin3 = 4;
int pin2 = 7;
int pin1 = 3;
int wait = 1000;

void setup() {
  pinMode(pin1, OUTPUT);
  pinMode(pin2, OUTPUT);
  pinMode(pin3, OUTPUT);
  pinMode(pin4, OUTPUT);
}

void loop() {

   // 0
   digitalWrite(pin1, LOW);
   digitalWrite(pin2, LOW);
   digitalWrite(pin3, LOW);
   digitalWrite(pin4, LOW);

   delay (wait);

   // 1 

   digitalWrite(pin1, LOW);
   digitalWrite(pin2, LOW);
   digitalWrite(pin3, LOW);
   digitalWrite(pin4, HIGH);

   delay (wait);

   // 2

   digitalWrite(pin1, LOW);
   digitalWrite(pin2, LOW);
   digitalWrite(pin3, HIGH);
   digitalWrite(pin4, LOW);

   delay (wait);

   // 3 

   digitalWrite(pin1, LOW);
   digitalWrite(pin2, LOW);
   digitalWrite(pin3, HIGH);
   digitalWrite(pin4, HIGH);

   delay (wait);

   // 4

   digitalWrite(pin1, LOW);
   digitalWrite(pin2, HIGH);
   digitalWrite(pin3, LOW);
   digitalWrite(pin4, LOW);

   delay (wait);

   // 5 

   digitalWrite(pin1, LOW);
   digitalWrite(pin2, HIGH);
   digitalWrite(pin3, LOW);
   digitalWrite(pin4, HIGH);

   // 6

   digitalWrite(pin1, LOW);
   digitalWrite(pin2, HIGH);
   digitalWrite(pin3, HIGH);
   digitalWrite(pin4, LOW);

   delay (wait);

   // 7

   digitalWrite(pin1, LOW);
   digitalWrite(pin2, HIGH);
   digitalWrite(pin3, HIGH);
   digitalWrite(pin4, HIGH);

   delay (wait);

   // 8 

   digitalWrite(pin1, HIGH);
   digitalWrite(pin2, LOW);
   digitalWrite(pin3, LOW);
   digitalWrite(pin4, LOW);

   delay (wait);

   // 9

   digitalWrite(pin1, HIGH);
   digitalWrite(pin2, LOW);
   digitalWrite(pin3, LOW);
   digitalWrite(pin4, HIGH);

   delay (wait);

   // 10

   digitalWrite(pin1, HIGH);
   digitalWrite(pin2, LOW);
   digitalWrite(pin3, HIGH);
   digitalWrite(pin4, LOW);

   delay (wait);

   // 11

   digitalWrite(pin1, HIGH);
   digitalWrite(pin2, LOW);
   digitalWrite(pin3, HIGH);
   digitalWrite(pin4, HIGH);

   delay (wait);

   // 12

   digitalWrite(pin1, HIGH);
   digitalWrite(pin2, HIGH);
   digitalWrite(pin3, LOW);
   digitalWrite(pin4, LOW);

   delay (wait);

   // 13 

   digitalWrite(pin1, HIGH);
   digitalWrite(pin2, HIGH);
   digitalWrite(pin3, LOW);
   digitalWrite(pin4, HIGH);

   delay (wait);

   // 14

   digitalWrite(pin1, HIGH);
   digitalWrite(pin2, HIGH);
   digitalWrite(pin3, HIGH);
   digitalWrite(pin4, LOW);

   delay (wait);
   
   // 15
   digitalWrite(pin1, HIGH);
   digitalWrite(pin2, HIGH);
   digitalWrite(pin3, HIGH);
   digitalWrite(pin4, HIGH);

   delay(wait);
}
