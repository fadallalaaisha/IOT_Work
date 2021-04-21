void BLUE(){

  int b=1;
while(b<=5)
  {
  digitalWrite(BLUE, HIGH);
  delay(500); // Wait for 500 millisecond(s)
  digitalWrite(BLUE, LOW);
  delay(500);
  b++;
  }
  
  }
