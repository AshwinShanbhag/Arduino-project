int latchPin = 11;
int clockPin = 9;
int dataPin = 12; 
int dt = 1250;

byte myByte=0xF0;
byte tmp = myByte;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(latchPin, OUTPUT);
pinMode(clockPin, OUTPUT);
pinMode(dataPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, LSBFIRST, myByte);
  digitalWrite(latchPin, HIGH);
  Serial.println(myByte, BIN);
   
  myByte = ~myByte;

  delay(dt);
  

}
