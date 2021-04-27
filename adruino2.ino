#include<Servo.h>
int potPin=0;
int Red=2;
int Blue=3;
int Green=4;
int val;
Servo servo1;
int  trigPin=7;
int  echoPin=6;
long distance;
long duration;

void setup()
{
  pinMode(Red, OUTPUT);
  pinMode(Blue, OUTPUT);
  pinMode(Green, OUTPUT);
  servo1.attach(8);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  
}

void loop()
{
  ultra();
  servo1.write(0);
  val=analogRead(potPin);
  val=map(val, 0, 1023, 0, 180);
  servo1.write(val);
  delay(15);
  
  if(distance<=8){
    digitalWrite(Red, HIGH);
   delay(1000);
    digitalWrite(Red, LOW);
   delay(500);
    servo1.write(60);
  }
  else {servo1.write(0);}
  
  if(distance<=8){
   digitalWrite(Blue, HIGH);
   delay(1000);
   digitalWrite(Blue, LOW);
   delay(500);
    servo1.write(120);
  }
   //}
    else {servo1.write(0);}

  if(distance<=8){
   digitalWrite(Green, HIGH);
   delay(1000);
    digitalWrite(Green, LOW);
   delay(500);
    servo1.write(180);
  }

else{servo1.write(0);}
}
void ultra()
{
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(2);
    
  digitalWrite(trigPin, LOW);
  delayMicroseconds(10); 

  digitalWrite(trigPin, HIGH);
  duration=pulseIn(echoPin,LOW);
  //distance=duration*0.343/2
  
}



  