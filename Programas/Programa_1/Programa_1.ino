// MINICURSO DE ARDUINO
// DIA 1
// 1º PROGRAMA

#define pino_LED 13
// A função setup() é executada apenas um vez
void setup()
{
	pinMode(pino_LED, OUTPUT); // Define que o pino 13 será utilizado como saída
}

// A função loop() é executada repetidamente
void loop()
{
	digitalWrite(pino_LED, HIGH); // Liga o LED
	delay(500);					  // Espera 500 milissegundos

	digitalWrite(pino_LED, LOW); // Desliga o LED
	delay(500);					  // Espera 500 milissegundos
}