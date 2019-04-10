#define led_azul 8
#define led_amarelo 9

unsigned long int tempoAzul = 0, tempoAmarelo = 0;
bool amareloAceso = false, azulAceso = false;

void setup()
{
	pinMode(led_azul, OUTPUT);
	pinMode(led_amarelo, OUTPUT);
}

void loop()
{
	if(millis() - tempoAzul > 300)
	{
		tempoAzul = millis();
		if(azulAceso == true)
			digitalWrite(led_azul, LOW);
		else
			digitalWrite(led_azul, HIGH);
	azulAceso = !azulAceso; // O "!" é uma negação
	}

	if(millis() - tempoAmarelo > 1000)
	{
		tempoAmarelo = millis();
		if(amareloAceso)
			digitalWrite(led_amarelo, LOW);
		else
			digitalWrite(led_amarelo, HIGH);
		amareloAceso = !amareloAceso;
	}
}