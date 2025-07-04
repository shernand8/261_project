int button=8;
int buttonVal=0;
int delayTime=250;
int ledBright=0;
int ledPin=3; 
void setup() {
  // put your setup code here, to run once:
pinMode(button,INPUT);
pinMode(ledPin,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
buttonVal=digitalRead(button);
Serial.print("button = ");
Serial.println(buttonVal);
delay(delayTime);
if (ledBright==9 && buttonVal==0){
  ledBright=0;
}
else if (buttonVal==0){
  ledBright=ledBright+3;
}
analogWrite(ledPin,ledBright);
}
