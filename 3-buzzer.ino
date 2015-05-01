/* ----------------  Algoritma---------------
- Luiz Carlos Pinage
- Armin Sonnenhohl
- Fausto Alcantara

Abril de 2015

Este programa é um software livre e obedece a licença PGL 3.0: Voce pode 
redistribui-lo e/ou modifica-lo respeitando os termos do GNU -General 
Public License publicado pela Fundação de Software Livre, versão 3.0 ou 
qualquer superior.
https://www.gnu.org/licenses/quick-guide-gplv3.html
*/

/* Programa introdutório em Arduino - Buzzer
v1.0 - Abril de 2015
-------------------Hardware------------------
- Buzzer no pino 9 do aArduino
- Resistore de 100 ohm - entre buzzer e pino terra
*/

int pinoBuzzer=9;

void setup() {
  // Coloque aqui o codigo para rodar apena uma vez:

  pinMode(pinoBuzzer,OUTPUT);  //definição do pino como saida
}

void loop() {
  // Coloque aqui o codigo para rodar repetidas vezes:
  
  tone(pinoBuzzer, 2000, 1000);   // Aplica sinal de 2 kHz (50% duty cycle) no pino do Buzzer por 1 s
  delay(2000);                    // Espera 2000 ms ou 2 s
}
