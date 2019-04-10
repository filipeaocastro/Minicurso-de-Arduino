// MINICURSO DE ARDUINO
// DIA 2
// 10º PROGRAMA

#define pino_buzzer 11

float seno; 
int frequencia, tempo;

void setup()
{
	pinMode(10, INPUT_PULLUP);
	pinMode(pino_buzzer, OUTPUT);
}

void loop()
{
	if(digitalRead(10) != 0)
		tempo = 000;
	else
		tempo = 200;

	senoide(tempo);
}

void senoide(int t)
{
	for(int i = 0; i < 180; i++)
	{
		seno = sin(i*3.1415 / 180);
		frequencia = 2000 + int(seno * 1000);
		tone(pino_buzzer, frequencia);
		delayMicroseconds(t);
	}
}
