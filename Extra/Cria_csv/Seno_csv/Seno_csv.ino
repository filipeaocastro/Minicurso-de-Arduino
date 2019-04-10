#define pin_LED 13

unsigned long int tempoAtual = 0, tempoAnterior = 0;
float seno; 
int grau = 0;
bool ledAceso = false;
void setup()
{
	Serial.begin(9600);
	pinMode(pin_LED, OUTPUT);
}
void loop()
{
	tempoAtual = millis();
	seno = sin(float(grau) * 3.1415 / 180.0);
	if(tempoAtual - tempoAnterior >= 10)
	{
		tempoAnterior = millis();
		Serial.print(tempoAnterior);
		Serial.print("; ");
		Serial.print(int (seno * 100));
		Serial.print("\n");


		grau++;
		if(grau == 361)
			grau = 0;
	}
}