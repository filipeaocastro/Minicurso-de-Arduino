// MINICURSO DE ARDUINO
// DIA 3
// 10º PROGRAMA

#include <LiquidCrystal.h>

// LiquidCrystal lcd(RS, E, D4, D5, D6, D7)
LiquidCrystal lcd(2, 3, 4, 5, 6, 7);


// A função setup() é executada apenas um vez
void setup()
{
	pinMode(9, OUTPUT);
	analogWrite(9, 80);

	lcd.begin(16,2);
	lcd.print("Hello World!");
	delay(1000);
}

// A função loop() é executada repetidamente
void loop()
{
	for (int i = 0; i < 10; i++)
	{
		lcd.setCursor(0, 1);
		lcd.print(i);
		delay(500);
	}
}