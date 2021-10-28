int latchPin = 11;
int clockPin = 9;
int dataPin = 12; 
int dt = 2250;

byte myByte=0b10010011;
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
   
  //For right to Left rotation 
  //myByte = (tmp*2) + (tmp/128);

  // For left to right rotation
  myByte = (tmp/2) + (tmp*128);
  tmp = myByte;
  delay(dt);
  

}
