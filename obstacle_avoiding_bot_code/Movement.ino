void Forward()
{
  digitalWrite(D5,HIGH);
  digitalWrite(D6,LOW);
  digitalWrite(D7,HIGH);
  digitalWrite(D8,LOW);
  delay(10);
  }

  void Backward()
{
  digitalWrite(D5,LOW);
  digitalWrite(D6,HIGH);
  digitalWrite(D7,LOW);
  digitalWrite(D8,HIGH);
    delay(10);
  }

  void Left()
{
  digitalWrite(D5,HIGH);
  digitalWrite(D6,LOW);
  digitalWrite(D7,LOW);
  digitalWrite(D8,HIGH);
    delay(10);
  }

  void Right()
{
  digitalWrite(D5,LOW);
  digitalWrite(D6,HIGH);
  digitalWrite(D7,HIGH);
  digitalWrite(D8,LOW);
    delay(10);
  }
