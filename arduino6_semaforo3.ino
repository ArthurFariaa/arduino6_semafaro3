// C++ code
//
int tempo = 0;

void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);

  tempo = 1000;
}

void loop()
{
  digitalWrite(13, HIGH);
  delay(tempo); // Wait for tempo millisecond(s)
  digitalWrite(13, LOW);
  digitalWrite(12, HIGH);
  delay(tempo); // Wait for tempo millisecond(s)
  digitalWrite(12, LOW);
  digitalWrite(11, HIGH);
  delay(tempo); // Wait for tempo millisecond(s)
  digitalWrite(11, LOW);
  delay(2000); // Wait for 2000 millisecond(s)
}