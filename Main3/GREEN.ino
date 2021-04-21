void GREEN(){

  int g=1;
while(g<=5)
  {
  digitalWrite(GREEN, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(GREEN, LOW);
  delay(500);   // Wait for 500 millisecond(s)
  g++;
  }
  
  }
