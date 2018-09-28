// MINICURSO DE ARDUINO
// DIA 4
// 14º PROGRAMA

byte byte_recebido;
int info;

void setup() 
{
  Serial.begin(9600); // opens serial port, sets data rate to 9600 bps
}

void loop() 
{
  if(Serial.available() > 0) 
  {
    byte_recebido = Serial.read();
    if(byte_recebido != 10)
    {
      info = int(byte_recebido) - 48;
      Serial.print("\nDado Recebido: ");
      Serial.print(info);
    }
  }
}