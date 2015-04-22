/* ----------------  Algoritma---------------
- Luiz Carlos Pinage
- Armin Sonnenhohl
- Fausto Alcantara

Abril de 2015

Este programa é um software livre e obedece a licença PGL 3.0: Voce pode 
redistribui-lo e/ou modifica-lo respeitando os termos do GNU -General 
Public License publicado pela Fundação de Software Livre, versão 3.0 ou 
qualquer superior.
*/

/* Programa introdutório em Arduino - Semaforo
v1.0 - Abril de 2015
-------------------Hardware------------------
- Led verde - pino 8
- Led vermelho - pino 9
- Led amarelo - pino 10
- 3 resistores de 1 kohm - entre terra e cada Led
*/

int LedVerde=8;      // definição do pino onde esta conectado o Led verde
int LedVermelho=9;   // definição do pino onde esta conectado o Led vermelho
int LedAmarelo=10;   // definição do pino onde esta conectado o Led amarelo

void setup(){
  // Coloque aqui o codigo para rodar apena uma vez:
 
  pinMode(LedVerde,OUTPUT);        //definição do pino como saida
  pinMode(LedVermelho,OUTPUT);     //definição do pino como saida 
  pinMode(LedAmarelo,OUTPUT);      //definição do pino como saida
  digitalWrite(LedVerde,LOW);      // Escreve nivel baixo na saida do Led
  digitalWrite(LedVermelho,LOW);   // Escreve nivel baixo na saida do Led
  digitalWrite(LedAmarelo,LOW);    // Escreve nivel baixo na saida do Led
}

void loop(){
  // Coloque aqui o codigo para rodar repetidas vezes:

  digitalWrite(LedVerde,HIGH);    // Sinal verde
  delay(7000);                    // Tempo de espera no sinal verde
  digitalWrite(LedVerde,LOW);     // Sinal verde desligado 
  digitalWrite(LedAmarelo,HIGH);  // Sinal amarelo
  delay(2000);                    // Tempo de espera no sinal amarelo 
  digitalWrite(LedAmarelo,LOW);   // Sinal amarelo desligado
  digitalWrite(LedVermelho,HIGH); // Sinal vermelho
  delay(5000);                    // Tempo de espera no sinal vermelho    
  digitalWrite(LedVermelho,LOW);  // Sinal vermelho desligado
}
