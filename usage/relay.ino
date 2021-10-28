int relayPin = 8;
int dt = 3000;
void setup() {
  // put your setup code here, to run once:
  pinMode(relayPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(relayPin, HIGH);
  delay(dt);

  digitalWrite(relayPin, LOW);
  delay(dt);
}
