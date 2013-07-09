void setup()
{
 pinMode(9,OUTPUT);
 Serial.begin(9600); 
}



void loop()
{
  int lowestVal = 400;
  int HighestVal = 900;
  int lowFreq = 50;
  int highFreq = 100;
  int sensorValue= analogRead(A0);
  Serial.println(sensorValue);
  sensorValue=map(sensorValue, lowestVal, HighestVal/p////////, lowFreq, highFreq);
  tone(9, sensorValue, 100);
  //tone(9,329.63,1000);
  delay(1);}
