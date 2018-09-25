// MINICURSO DE ARDUINO
// DIA 1
// 2º PROGRAMA

#define pino_LED 13
#define pino_botao 9

// A função setup() é executada apenas um vez
void setup()
{
	pinMode(pino_LED, OUTPUT); 	// Define que o pino 13 será utilizado como saída
	pinMode(pino_botao, INPUT); // Define que o pino 9 será utilizado como entrada
}

// A função loop() é executada repetidamente
void loop()
{
	if(digitalRead(pino_botao) == 0)
	{
		digitalWrite(pino_LED, HIGH); // Liga o LED
		delay(50);					  // Espera 500 milissegundos

		digitalWrite(pino_LED, LOW); // Desliga o LED
		delay(50);					 // Espera 500 milissegundos
	}

	else
		digitalWrite(pino_LED, LOW);
}