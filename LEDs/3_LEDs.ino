// C++ cod

void setup()
{
  pinMode(8, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop()
{
  digitalWrite(8, HIGH);
  digitalWrite(10, LOW);
  digitalWrite(9, LOW);
  delay(100); // Wait for 2000 millisecond(s)
  digitalWrite(8, LOW);
  digitalWrite(10, HIGH);
  digitalWrite(9, LOW);
  delay(100); // Wait for 2000 millisecond(s)
  digitalWrite(8, LOW);
  digitalWrite(10, LOW);
  digitalWrite(9, HIGH);
  delay(100); // Wait for 2000 millisecond(s)
}
