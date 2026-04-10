int ldr = A5;
int ledVerde = 9;
int ledAmarelo = 6;
int ledVermelho = 11;
int buzzer = 10;
int valorLdr = 0;

void setup()
{
  pinMode(ledVerde, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledVermelho, OUTPUT);
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  valorLdr = analogRead(ldr);
  Serial.println(valorLdr);

  if (valorLdr >= 750)
  {
    digitalWrite(ledVerde, HIGH);
    digitalWrite(ledAmarelo, LOW);
    digitalWrite(ledVermelho, LOW);
    digitalWrite(buzzer, LOW);
  }

  else if (valorLdr >= 200)
  {
    digitalWrite(ledVerde, LOW);
    digitalWrite(ledAmarelo, HIGH);
    digitalWrite(ledVermelho, LOW);
    digitalWrite(buzzer, LOW);
  }

  else
  {
    digitalWrite(ledVerde, LOW);
    digitalWrite(ledAmarelo, LOW);
    digitalWrite(ledVermelho, HIGH);
    digitalWrite(buzzer, HIGH);
    delay(3000); 
    digitalWrite(buzzer, LOW);
    delay(1000); 
  }

  delay(200);
}