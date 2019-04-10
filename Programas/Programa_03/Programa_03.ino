// MINICURSO DE ARDUINO
// DIA 1
// 3º PROGRAMA

#define LED_VERMELHO 4
#define LED_AMARELO 3
#define LED_VERDE 2
#define pino_POT A5

int k_input;

// A função setup() é executada apenas um vez
void setup()
{
	// Definindo que os pinos 2, 3 e 4 serão utilizados como saída
	pinMode(LED_VERMELHO, OUTPUT);
	pinMode(LED_AMARELO, OUTPUT);
	pinMode(LED_VERDE, OUTPUT);

	// Definindo que o pino A5 será utilizado como entrada
	pinMode(pino_POT, INPUT);
}

// A função loop() é executada repetidamente
void loop()
{
	k_input = map(analogRead(pino_POT), 0, 1023, 0, 100);

	digitalWrite(LED_VERMELHO, HIGH);
	delay(10 * k_input);

	digitalWrite(LED_VERMELHO, LOW);
	digitalWrite(LED_VERDE, HIGH);
	delay(10 * k_input);

	digitalWrite(LED_VERDE, LOW);
	digitalWrite(LED_AMARELO, HIGH);
	delay(5 * k_input);

	digitalWrite(LED_AMARELO, LOW);
}