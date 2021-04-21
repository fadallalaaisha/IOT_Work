int RED =4;
int YELLOW=3;
int GREEN=2;

void setup()
{
  pinMode(RED, OUTPUT);
  pinMode(YELLOW, OUTPUT);
  pinMode(GREEN, OUTPUT);
}

void loop()
{
  
  for(int a=1;a<=4;a++)
{
  digitalWrite(RED, HIGH);
  delay(500); // Wait for 500 millisecond(s)
  digitalWrite(RED, LOW);
  delay(500);
  }
  for(int b=1;b<=3;b++)
  {
  digitalWrite(YELLOW, HIGH);
  delay(500); 
  digitalWrite(YELLOW, LOW);
  delay(500);
  }
  for(int c=1;c<=2;c++)
  {
  digitalWrite(GREEN, HIGH);
  delay(500); 
  digitalWrite(GREEN, LOW);
  delay(500);
  }
  
}
