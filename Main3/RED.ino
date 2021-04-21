void RED(){
  
int r=1;
while(r<=5)
  {
  digitalWrite(RED, HIGH);
  delay(500); // Wait for 500 millisecond(s)
  digitalWrite(RED, LOW);
  delay(500);
  r++;
  }
  }
  
