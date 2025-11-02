int red1=2;
int orange1=3;
int green1=4;
int red2=5;
int orange2=6;
int green2=7;
int red3=8;
int orange3=9;
int green3=10;
int red4=11;
int orange4=12;
int green4=13;
int sensor1=A0;
int sensor2=A1;
int sensor3=A2;
int sensor4=A3;
int sensor5=A4;
int sensor6=A5;
int sensor7=A6;
int sensor8=A7;
int Status1;
int Status2;
int Status3;
int Status4;
int Status5;
int Status6;
int Status7;
int Status8;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(red1,OUTPUT);
pinMode(orange1,OUTPUT);
pinMode(green1,OUTPUT);
pinMode(red2,OUTPUT);
pinMode(orange2,OUTPUT);
pinMode(green2,OUTPUT);
pinMode(red3,OUTPUT);
pinMode(orange3,OUTPUT);
pinMode(green3,OUTPUT);
pinMode(red4,OUTPUT);
pinMode(orange4,OUTPUT);
pinMode(green4,OUTPUT);
pinMode(sensor1,INPUT);
pinMode(sensor2,INPUT);
pinMode(sensor3,INPUT);
pinMode(sensor4,INPUT);
pinMode(sensor5,INPUT);
pinMode(sensor6,INPUT);
pinMode(sensor7,INPUT);
pinMode(sensor8,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
Status1=digitalRead(sensor1);
Serial.println(Status1);
Status2=digitalRead(sensor2);
Serial.println(Status2);
Status3=digitalRead(sensor3);
Serial.println(Status3);
Status4=digitalRead(sensor4);
Serial.println(Status4);
Status5=digitalRead(sensor5);
Serial.println(Status5);
Status6=digitalRead(sensor6);
Serial.println(Status6);
Status7=digitalRead(sensor7);
Serial.println(Status7);
Status8=digitalRead(sensor8);
Serial.println(Status8);

if(Status1==0&&Status2==1)
{
  digitalWrite(red1,HIGH);
  delay(4000);
  digitalWrite(red1,LOW);
  digitalWrite(orange1,HIGH);
  delay(3000);
  digitalWrite(orange1,LOW);
  digitalWrite(green1,HIGH);
  delay(10000);
  digitalWrite(green1,LOW);
  digitalWrite(red1,HIGH);
}
else{
  digitalWrite(red1,HIGH);
  digitalWrite(orange1,LOW);
  digitalWrite(green1,LOW);
}
if(Status1==0&&Status2==0)
{
  digitalWrite(red1,HIGH);
  delay(4000);
  digitalWrite(red1,LOW);
  digitalWrite(orange1,HIGH);
  delay(3000);
  digitalWrite(green1,HIGH);
  delay(30000);
  digitalWrite(green1,LOW);
  digitalWrite(red1,HIGH);
}
else {
  digitalWrite(red1,HIGH);
  digitalWrite(orange1,LOW);
  digitalWrite(green1,LOW);
}
if(Status3==0&&Status4==1)
{
   digitalWrite(red2,HIGH);
  delay(4000);
  digitalWrite(red2,LOW);
  digitalWrite(orange2,HIGH);
  delay(3000);
  digitalWrite(orange2,LOW);
  digitalWrite(green2,HIGH);
  delay(10000);
  digitalWrite(green2,LOW);
  digitalWrite(red2,HIGH);
}
else{
  digitalWrite(red2,HIGH);
  digitalWrite(orange2,LOW);
  digitalWrite(green2,LOW);
}
if(Status3==0&&Status4==0)
{
  digitalWrite(red2,HIGH);
  delay(4000);
  digitalWrite(red2,LOW);
  digitalWrite(orange2,HIGH);
  delay(3000);
  digitalWrite(green2,HIGH);
  delay(30000);
  digitalWrite(green2,LOW);
  digitalWrite(red2,HIGH);
}
else {
  digitalWrite(red2,HIGH);
  digitalWrite(orange2,LOW);
  digitalWrite(green2,LOW);
}
if(Status5==0&&Status6==1)
{
   digitalWrite(red3,HIGH);
  delay(4000);
  digitalWrite(red3,LOW);
  digitalWrite(orange3,HIGH);
  delay(3000);
  digitalWrite(orange3,LOW);
  digitalWrite(green3,HIGH);
  delay(10000);
  digitalWrite(green3,LOW);
  digitalWrite(red3,HIGH);
}
else{
  digitalWrite(red3,HIGH);
  digitalWrite(orange3,LOW);
  digitalWrite(green3,LOW);
}
if(Status5==0&&Status6==0)
{
  digitalWrite(red3,HIGH);
  delay(4000);
  digitalWrite(red3,LOW);
  digitalWrite(orange3,HIGH);
  delay(3000);
  digitalWrite(green3,HIGH);
  delay(30000);
  digitalWrite(green3,LOW);
  digitalWrite(red3,HIGH);
}
else {
  digitalWrite(red3,HIGH);
  digitalWrite(orange3,LOW);
  digitalWrite(green3,LOW);
}
if(Status7==0&&Status8==1)
{
   digitalWrite(red4,HIGH);
  delay(4000);
  digitalWrite(red4,LOW);
  digitalWrite(orange4,HIGH);
  delay(3000);
  digitalWrite(orange4,LOW);
  digitalWrite(green4,HIGH);
  delay(10000);
  digitalWrite(green4,LOW);
  digitalWrite(red4,HIGH);
}
else{
  digitalWrite(red4,HIGH);
  digitalWrite(orange4,LOW);
  digitalWrite(green4,LOW);
}
if(Status7==0&&Status8==0)
{
  digitalWrite(red4,HIGH);
  delay(4000);
  digitalWrite(red4,LOW);
  digitalWrite(orange4,HIGH);
  delay(3000);
  digitalWrite(green4,HIGH);
  delay(30000);
  digitalWrite(green4,LOW);
  digitalWrite(red4,HIGH);
}
else {
  digitalWrite(red4,HIGH);
  digitalWrite(orange4,LOW);
  digitalWrite(green4,LOW);
}
}
