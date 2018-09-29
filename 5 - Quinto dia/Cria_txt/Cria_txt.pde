import processing.serial.*; // importa a biblioteca de comunicação serial
Serial mySerial;            // cria uma instância de comunicação serial
PrintWriter output;         // Cria um objeto da classe PrintWriter que permite criar um arquivo .txt

int lf = 10;                // 10 = '\n' em ASCII
String myString = null;     // Declarando uma string e deixando seu valor nulo

void setup() 
{
   mySerial = new Serial( this, "COM5", 9600 ); // Inicia a comunicação serial na porta COM5 (Verifique qual porta o Arduino está conectado através da IDE do Arduino)
   output = createWriter( "data.txt" );         // Cria o arquivo .txt

  // Caso o programa comece lendo um texto pela metade, ele joga o valor lido fora e começa a guardar apenas o texto da próxima linha
  myString = mySerial.readStringUntil(lf); // Lê até o final da linha
  myString = null;                         // "Joga fora" os valores lidos na função acima
}

void draw() 
{
 while (mySerial.available() > 0) // Enquanto houver dados para serem lidos, os comandos abaixo serão executados
 {
    myString = mySerial.readStringUntil(lf); // Lê os dados até a quebra de linha -> '\n' (número 10 em valores decimais)
    if (myString != null)                    // Se a string lida não for nula, executa os comandos abaixo
    {
      output.print(myString);                // Guarda o texto lido no arquivo "data.txt", como definido acima
      println(myString);                     // Imprime o texto lido no console do Processing
    }
  }
}

void keyPressed() 
{
    output.flush();  // Espera todos os dados acabarem de serem gravados no arquivo
    output.close();  // Finaliza o arquivo
    exit();          // Fecha o programa
}
