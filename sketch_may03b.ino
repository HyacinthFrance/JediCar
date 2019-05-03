void setup()
{
  pinMode(PIN_PD3, OUTPUT);
}
 
void loop()
{
  digitalWrite(PIN_PD3, LOW);
  delay(1000);
  digitalWrite(PIN_PD3, HIGH);
  delay(1000);
}
