// MINICURSO DE ARDUINO
// DIA 4
// 11º PROGRAMA

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

int i = 0;

void setup() 
{
  for(int i = 2; i < 11; i++)
    pinMode(i, OUTPUT);

  pinMode(10, INPUT_PULLUP);
}

void loop()
{
    if(digitalRead(10) == 0)
       i++;
    if(i == 10)
      i = 0;
    escreveDigito(i);
    delay(100);
}

void escreveDigito(int n)
{
  for(int i = 0; i < 8; i++)
    digitalWrite( (i + 2), digitos[n][i]);
}