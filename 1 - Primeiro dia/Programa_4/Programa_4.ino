// MINICURSO DE ARDUINO
// DIA 1
// 4º PROGRAMA

#define pino_LED 3
#define pino_POT A5

int dimmer;

// A função setup() é executada apenas um vez
void setup()
{
	// Definindo que o pino 3 será utilizado como saída
	pinMode(pino_LED, OUTPUT);

	// Definindo que o pino A5 será utilizado como entrada
	pinMode(pino_POT, INPUT);
}

// A função loop() é executada repetidamente
void loop()
{
	dimmer = map(analogRead(pino_POT), 0, 1023, 0, 255);

	analogWrite(pino_LED, dimmer);
}