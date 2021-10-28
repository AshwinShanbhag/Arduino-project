int ledPin = 11;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  char receiveVal;

  if(Serial.available()>0)
  {
    receiveVal = Serial.read();

    if(receiveVal == '1')
    {
      digitalWrite(ledPin,HIGH);
      Serial.println("LED:ON");  
    }
    if(receiveVal == '0')
    {
      digitalWrite(ledPin,LOW);
      Serial.println("LED:OFF");  
    } 
  }
  delay(50);
}
