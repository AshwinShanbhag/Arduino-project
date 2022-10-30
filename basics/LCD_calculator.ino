# include<LiquidCrystal.h>

int num1, num2, res;
String msg1("First Number:");
String msg2("Second Number:");
String msg3("Operation:");
String op;

LiquidCrystal lcd(7,8,9,10,11,12);

void setup() {
  lcd.begin(16,2);
  Serial.begin(9600);
}

void loop() {

// 1st number
lcd.setCursor(0,0);
lcd.print(msg1);
delay(1000);
while(Serial.available()==0){
  }
num1=Serial.parseInt();
lcd.clear();

// 2nd number
lcd.print(msg2);
delay(1000);
while(Serial.available()==0){
  }
num2=Serial.parseInt();
lcd.clear();

// Operation
lcd.print(msg3);
delay(1000);
while(Serial.available()==0){
  }
op=Serial.readString();
lcd.clear();

// Calculation
if(op=="+"){res=num1+num2;}
else if(op=="-"){res=num1-num2;}
else if(op=="*"){res=num1*num2;}
else if(op=="/"){res=num1/num2;}
else if(op=="%"){res=num1%num2;}




// Result
lcd.setCursor(0,0);
lcd.print("The result is:");
lcd.setCursor(0,1);
lcd.print(num1);
lcd.print("+");
lcd.print(num2);
lcd.print("=");
lcd.print(res);
delay(5000);
lcd.clear();
}
