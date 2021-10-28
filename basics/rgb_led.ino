int rPin = 6;
int gPin = 9;
int bPin = 10;
String myColor;
String msg = "What Colour do you want?";

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(rPin, OUTPUT);
  pinMode(gPin, OUTPUT);
  pinMode(bPin, OUTPUT);
  

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(msg);
  while(Serial.available() == 0){
    
  }
  myColor = Serial.readString();

  
    
  if (myColor == "red"){
    digitalWrite(rPin, HIGH);
    digitalWrite(gPin, LOW);
    digitalWrite(bPin, LOW);
  }
  if (myColor == "green"){
    digitalWrite(rPin, LOW);
    digitalWrite(gPin, HIGH);
    digitalWrite(bPin, LOW);
  }
  if (myColor == "blue"){
    digitalWrite(rPin, LOW);
    digitalWrite(gPin, LOW);
    digitalWrite(bPin, HIGH);
  }
  if (myColor == "off"){
    digitalWrite(rPin, LOW);
    digitalWrite(gPin, LOW);
    digitalWrite(bPin, LOW);
  }
 if (myColor == "aqua"){
    digitalWrite(rPin, LOW);
    analogWrite(gPin, 255);
    analogWrite(bPin, 255);
  }
  if (myColor == "magenta"){
    analogWrite(rPin, 255);
    analogWrite(gPin, 0);
    analogWrite(bPin, 255);
  }
  if (myColor == "yellow"){
    analogWrite(rPin, 255);
    analogWrite(gPin, 255);
    analogWrite(bPin, 0);
  }
  if (myColor == "orange"){
    analogWrite(rPin, 255);
    analogWrite(gPin, 165);
    analogWrite(bPin, 0);
  }
  if (myColor == "olive"){
    analogWrite(rPin, 128);
    analogWrite(gPin, 128);
    analogWrite(bPin, 0);
  }
  if (myColor == "orchid"){
    analogWrite(rPin, 218);
    analogWrite(gPin, 112);
    analogWrite(bPin, 147);
  }
}  
