// MINICURSO DE ARDUINO
// DIA 1
// 5º PROGRAMA

#define pino_LED_1 3
#define pino_LED_2 5
#define pino_LED_3 6

#define pino_POT_1 A0
#define pino_POT_2 A1
#define pino_POT_3 A2

int dimmer_1, dimmer_2, dimmer_3;

// A função setup() é executada apenas um vez
void setup()
{
	// Definindo que os pinos 3, 5 e 6 serão utilizados como saída
	pinMode(pino_LED_1, OUTPUT);
	pinMode(pino_LED_2, OUTPUT);
	pinMode(pino_LED_3, OUTPUT);

	// Definindo que os pinos A0, A1 e A2 serão utilizados como entrada
	pinMode(pino_POT_1, INPUT);
	pinMode(pino_POT_2, INPUT);
	pinMode(pino_POT_3, INPUT);
}

// A função loop() é executada repetidamente
void loop()
{
	dimmer_1 = map(analogRead(pino_POT_1), 0, 1023, 0, 255);
	dimmer_2 = map(analogRead(pino_POT_2), 0, 1023, 0, 255);	
	dimmer_3 = map(analogRead(pino_POT_3), 0, 1023, 0, 255);

	analogWrite(pino_LED_1, dimmer_1);
	analogWrite(pino_LED_2, dimmer_2);
	analogWrite(pino_LED_3, dimmer_3);
}