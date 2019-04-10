// MINICURSO DE ARDUINO
// DIA 3
// 12º PROGRAMA

#include <LiquidCrystal.h>
#include <thermistor.h>
#include "HardwareSerial.h"

#define pino_NTC A5
#define pino_Rele 10

// LiquidCrystal lcd(RS, E, D4, D5, D6, D7)
    LiquidCrystal lcd(2, 3,  4,  5,  6,  7);


THERMISTOR thermistor(pino_NTC,       // Pino do NTC
                      10000,          // Resistência nominal a 25 ºC
                      3950,           // Ceficiente beta
                      10000);         // Valor do resistor em série

float temperatura;

// A função setup() é executada apenas um vez
void setup()
{
	pinMode(9, OUTPUT);
	analogWrite(9, 80);
	pinMode(pino_NTC, INPUT);
	pinMode(pino_Rele, OUTPUT);

	lcd.begin(16,2);
}

// A função loop() é executada repetidamente
void loop()
{
	lcd.clear();
	temperatura = float (thermistor.read());
	temperatura /= 10; // É o mesmo que temperatura = temperatura / 10;
	lcd.print(temperatura);
	lcd.print(" oC");
	lcd.setCursor(0, 1);
	if(temperatura > 30)
	{
		digitalWrite(pino_Rele, HIGH);
		lcd.print("Cooler LIGADO");
	}
	else
	{
		digitalWrite(pino_Rele, LOW);
		lcd.print("Cooler DESLIGADO");
	}
	delay(500);
}