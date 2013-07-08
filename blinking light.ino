void setup()
{
  pinMode(11, OUTPUT);//red
  pinMode(12, OUTPUT);//green
  pinMode(13, OUTPUT);//blue
  
  
}

void loop()
{
  digitalWrite(11, LOW);
  delay(1000);
  digitalWrite(12, HIGH);
  delay(1000); 
  digitalWrite(13, LOW);
  delay(1000);
  
  digitalWrite(11, LOW);
  delay(100);
  digitalWrite(12, HIGH);
  delay(300); 
  digitalWrite(13, LOW);
  delay(400);
  
  delay(1);
}
