// MINICURSO DE ARDUINO
// DIA 4
// 12º PROGRAMA

#define pino_buzzer 11
#define pino_botao 10


byte digitos [11][8] = 
{//A, B, C, P, D, E, F, G 
  {1, 1, 1, 0, 1, 1, 1, 0}, // 0
  {0, 0, 1, 0, 1, 0, 0, 0}, // 1
  {1, 1, 0, 0, 1, 1, 0, 1}, // 2
  {0, 1, 1, 0, 1, 1, 0, 1}, // 3
  {0, 0, 1, 0, 1, 0, 1, 1}, // 4
  {0, 1, 1, 0, 0, 1, 1, 1}, // 5
  {1, 1, 1, 0, 0, 1, 1, 1}, // 6
  {0, 0, 1, 0, 1, 1, 0, 0}, // 7
  {1, 1, 1, 0, 1, 1, 1, 1}, // 8
  {0, 1, 1, 0, 1, 1, 1, 1}, // 9
  {0, 0, 0, 1, 0, 0, 0, 0} // Ponto
};

int aux = 9;
void setup() 
{
  for (int i = 2; i < 11; i++)
    pinMode(i, OUTPUT);

  pinMode(pino_botao, INPUT_PULLUP);
}

void loop() 
{
  for(int i = 9; i > 0; i--) 
  {
    escreveDigito(i);
    aux--;
    delay(1000);
  }
  
  while(digitalRead(pino_botao) != 0)
  {
    escreveDigito(0);
    analogWrite(pino_buzzer, 123);
    delay(100);
    analogWrite(pino_buzzer, 0);
    delay(50);
    analogWrite(pino_buzzer, 123);
    delay(100);
    analogWrite(pino_buzzer, 0);
   delay(50);
    analogWrite(pino_buzzer, 123);
    delay(100);
    analogWrite(pino_buzzer, 0);
    delay(50);
    analogWrite(pino_buzzer, 123);
    delay(100);
    analogWrite(pino_buzzer, 0);
    delay(400);
  }
}

void escreveDigito(int n)
{
  for(int i = 0; i < 8; i++)
  {
    digitalWrite( (i + 2), digitos[n][i]);
  }
}

