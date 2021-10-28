int Xpin=A0;
int Ypin=A2;
int Spin=2;
int xVal;
int yVal;
int sVal;
int dt=200;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(Xpin, INPUT);
  pinMode(Ypin, INPUT);
  pinMode(Spin, INPUT);
  digitalWrite(Spin, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  xVal = analogRead(Xpin);
  yVal = analogRead(Ypin);
  sVal = digitalRead(Spin);
  
  delay(dt);
  Serial.print("X value = ");
  Serial.print(xVal);
  Serial.print(" Y value = ");
  Serial.print(yVal);
  Serial.print(" Switch state is ");
  Serial.println(sVal);
}
