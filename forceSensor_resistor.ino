void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int force = analogRead(A0);
  Serial.println(force);
  if(force < 50)
  {
    digitalWrite(13, HIGH);
    digitalWrite(12, HIGH);
  }
  else
  {
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
  }
  delay(100);
}