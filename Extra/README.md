# Criação de arquivos com informações do Arduino

  Aqui são mostrados os programas do Arduino que enviam dados de uma senoide para serem guardados. Para receber os dados do Aduino via comunicação Serial e criar os arquivos de texto foi utilizada um script escrito na linguagem [Processing](https://processing.org), entretanto qualquer linguagem que ofereça suporte à comunicação serial poderia ter sido utilizada.

## Arquivo .txt
  Um dos programas cria um arquivo .txt apenas com as informações de amplitude da senoide distribuídas em uma coluna.

## Arquivo .csv
  O outro programa cria um arquivo .csv com as informações de tempo e amplitude da senoide, onde o tempo é definido pela função *millis()* no Arduino. As informações de tempo e amplitude são separadas por um ";" em cada linha.

### Observações:

* Os arquivos .pde podem ser abertos e editados no [Processing](https://processing.org)
* Foi utilizado o Processing na versão 2.2.1

Qualquer dúvida, envie um e-mail para: **filipeaocastro@gmail.com**
  
