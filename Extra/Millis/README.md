## Utilização da função *millis()* do Arduino

   Neste programa é abordada a utilização da função ***millis()*** do Arduino para piscar dois LEDs simultaneamente com frequências diferentes.

### *millis()*

   A função *millis()* retorna a quantidade de milissegundos passados desde o momento em que o Arduino foi iniciado da última vez.
   Como o valor retornado por essa função aumenta em mil unidades a cada segundo, o mesmo deve ser armazenado numa variável do tipo ***long unsigned***

```
long unsigned int tempo; 
tempo = millis();
```

   A função *millis()* é extremamente útil devido ao fato que ela permite que o Arduino execute funções simultâneas, algo que não é possível utilizando a função *delay()*.


Qualquer dúvida, envie um e-mail para: **filipeaocastro@gmail.com**
  
