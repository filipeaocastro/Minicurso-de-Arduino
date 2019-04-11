// MINICURSO DE ARDUINO
// DIA 4
// 15º PROGRAMA

#define pino_LED_1 8
#define pino_LED_2 9
#define pino_LED_3 10
#define pino_buzzer 3

int valorRecebido;
int info = 0;
bool ledLigado_1 = false, ledLigado_2 = false,ledLigado_3 = false;

void setup() 
{
  Serial.begin(9600); // opens serial port, sets data rate to 9600 bps
  pinMode(pino_LED_1, OUTPUT);
  pinMode(pino_LED_2, OUTPUT);
  pinMode(pino_LED_3, OUTPUT);
  pinMode(pino_buzzer, OUTPUT);
}

void loop() 
{
  recebeDado();

  switch(info)
  {
    case 1:
      if(!ledLigado_1)
        digitalWrite(pino_LED_1, HIGH);
      else
        digitalWrite(pino_LED_1, LOW);
      ledLigado_1 = !ledLigado_1;
      break;

    case 2:
      if(!ledLigado_2)
        digitalWrite(pino_LED_2, HIGH);
      else
        digitalWrite(pino_LED_2, LOW);
      ledLigado_2 = !ledLigado_2;
      break;

    case 3:
      if(!ledLigado_3)
        digitalWrite(pino_LED_3, HIGH);
      else
        digitalWrite(pino_LED_3, LOW);
      ledLigado_3 = !ledLigado_3;
      break;

     case 4:
      apitaBuzzer();
      break;
  }
  info = 0;  
}

void recebeDado()
{
 if(Serial.available() > 0) 
 {
  valorRecebido = Serial.read();
  if(valorRecebido != 10)
    {
      info = int(valorRecebido) - 48;
      Serial.print("\nDado Recebido: ");
      Serial.print(info);
    }
  } 
}

void apitaBuzzer()
{
  digitalWrite(pino_buzzer, HIGH);
  delay(50);
  digitalWrite(pino_buzzer, 0);
  delay(50);
  digitalWrite(pino_buzzer, HIGH);
  delay(50);
  digitalWrite(pino_buzzer, 0);
  delay(50);
  digitalWrite(pino_buzzer, HIGH);
  delay(50);
  digitalWrite(pino_buzzer, 0);
}