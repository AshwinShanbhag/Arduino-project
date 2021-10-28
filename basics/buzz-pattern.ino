int buzzPin = 8;
int potPin = A2;
int potVal;
float dMicrosec;

void setup() {
  pinMode(buzzPin, OUTPUT);
  pinMode(potPin, INPUT);

}

void loop() {
  potVal = analogRead(potPin);
  

  dMicrosec = (9940./1023.)*potVal + 60;
  
  digitalWrite(buzzPin, HIGH);
  delayMicroseconds(dMicrosec);
  digitalWrite(buzzPin, LOW);
  delayMicroseconds(dMicrosec);

}
