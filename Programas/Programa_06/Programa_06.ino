// MINICURSO DE ARDUINO
// DIA 2
// 6º PROGRAMA

#define pino_LED 3
#define pino_LDR A5

int brilho, leitura_LDR;

// A função setup() é executada apenas um vez
void setup()
{
	// Definindo que o pino 3 será utilizado como saída
	pinMode(pino_LED, OUTPUT);

	// Definindo que o pino A5 será utilizado como entrada
	pinMode(pino_LDR, INPUT);
}

// A função loop() é executada repetidamente
void loop()
{
	leitura_LDR = analogRead(pino_LDR);

	if(leitura_LDR > 700)  // Limite Superior
		leitura_LDR = 700;

	if(leitura_LDR < 400)  // Limite Inferior
		leitura_LDR = 400;

	brilho = map(leitura_LDR, 400, 700, 0, 255);

	analogWrite(pino_LED, brilho);
	delay(1);
}