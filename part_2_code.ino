int readPin=A4;
int readVal;
float outVolt=0;
int delayTime=500;
int redPin=7;
int greenPin=3; 
int bluePin=2;
void setup() {
  // put your setup code here, to run once:
  pinMode(readPin,INPUT);
  pinMode(redPin,OUTPUT);
  pinMode(greenPin,OUTPUT);
  pinMode(bluePin,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  readVal=analogRead(readPin);
  outVolt=(5./1023.)*readVal;
  Serial.println(outVolt);
  
  if (outVolt<=1){
    digitalWrite(redPin,LOW);
    digitalWrite(bluePin,LOW);
    analogWrite(greenPin,50);
  }
  else if (outVolt<=3){
    digitalWrite(redPin,LOW);
    analogWrite(greenPin,0);
    digitalWrite(bluePin,HIGH);
  }
  else {
    analogWrite(greenPin,0);
    digitalWrite(bluePin,LOW);
    digitalWrite(redPin,HIGH);
  }
  delay(delayTime);
}
