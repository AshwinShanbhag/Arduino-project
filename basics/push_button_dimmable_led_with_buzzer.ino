int button1 = 7;
int button2 = 8;
int buttonVal1;
int buttonVal2;
int dt = 100;
int dt1 = 500;
int bright = 0;
int led = 3;
int buzz = 10;

void setup() {
  // put your setup code here, to run once:
  pinMode(button1, INPUT);
  pinMode(button2, INPUT);
  pinMode(buzz, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonVal1 = digitalRead(button1);
  buttonVal2 = digitalRead(button2);

  if(buttonVal1 == 0){
    bright += 5;
  }
  if(buttonVal2 == 0){
    bright -=5; 
  }
  if(bright >255){
    bright  = 255;
    digitalWrite(buzz, HIGH);
    delay(dt1);
    digitalWrite(buzz, LOW);
  }
  if(bright < 0){
    bright  = 0;
    digitalWrite(buzz, HIGH);
    delay(dt1);
    digitalWrite(buzz, LOW);
  }  
  delay(dt);
  analogWrite(led, bright);
}
