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

/*Programa introdutório em Arduino - Ola Mundo
v1.0 - Abril de 2015
-------------------Hardware------------------
- LED verde - pino 8
- Resistor 1 kohm em serie com o LED

*/

int pinoLED=8; // definição do pino onde esta conectado o LED

void setup(){ 
  // Coloque aqui o codigo para rodar apena uma vez:
  pinMode(pinoLED,OUTPUT);  //definição do pino como saida
}

void loop(){
  // Coloque aqui o codigo para rodar repetidas vezes:

  digitalWrite(pinoLED,HIGH); // Escreve nivel alto na saida do Led
  delay(1000); // espera 1000 ms ou 1 s
  digitalWrite(pinoLED,LOW); // Escreve nivel baixo na saida do Led
  delay(1000); // espera 1000 ms ou 1 s  
}
