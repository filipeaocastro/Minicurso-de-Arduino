// MINICURSO DE ARDUINO
// DIA 3
// 11º PROGRAMA

#include <LiquidCrystal.h>
#include <thermistor.h>
#include "HardwareSerial.h"

#define pino_NTC A5
//#define pino_Rele 10

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
	analogWrite(9, 60); // Controle do contraste do LCD
	pinMode(pino_NTC, INPUT);
	pinMode(pino_Rele, OUTPUT);

	lcd.begin(16,2);

	lcd.setCursor(0, 0);
	lcd.print("Temperatura: ");
}

// A função loop() é executada repetidamente
void loop()
{
	temperatura = float (thermistor.read());
	temperatura /= 10; // É o mesmo que temperatura = temperatura / 10;
	
	lcd.setCursor(0, 1);
	lcd.print(temperatura);
	lcd.write(223); //Imprime a bolinha de graus
	lcd.print("C");
		

	if(temperatura < 22)
	{
		lcd.setCursor(7, 1);
		lcd.print("    FRIO");
	}
	else
	{
		lcd.setCursor(7, 1);
		lcd.print(" QUENTE");
	}

	delay(100);
}