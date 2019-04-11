// MINICURSO DE ARDUINO
// DIA 4
// 13º PROGRAMA

#define pino_pot A5

float tensao;

void setup()
{
	pinMode(pino_pot, INPUT);
	Serial.begin(9600);
}

void loop()
{
	tensao = analogRead(pino_pot);
	tensao = (tensao / 1023) * 5;
	Serial.print("Tensao no Potenciometro: ");
	Serial.print(tensao);
	Serial.print(" V\n");
	delay(100);
}