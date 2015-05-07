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

/* Programa introdutório em Arduino - Sensor de estacionamento
v1.0 - Abril de 2015
-------------------Hardware------------------
- Sensor de distancia ultrassonico HC-SR04
- Buzzer
- Resistor 100 ohm
*/

#include <sensorUltrassonico.h> // inclui bibilioteca do sensor ultrassonico

int pinoTrigger=13;       // define pino de trigger
int pinoEcho=12;          // define pino de Echo
int pinoBuzzer=8;         // define pino do Buzzer
float distancia;          // Variavel que guarda o valor da distancia
int tempoEspera;          // Variavel que  guarda o intervalo de toque do Buzzer
int distanciaCritica=10;   // Distancia critica na qual o buzzer toca continuamente 

sensorUltrassonico meuSensor(pinoTrigger, pinoEcho); // definição da instancia do sensor


void setup() {
  // Coloque aqui o codigo para rodar apena uma vez:

}

void loop() {
  // Coloque aqui o codigo para rodar repetidas vezes:
  
  distancia=meuSensor.medeDistancia();  // Mede a distancia em cm

  if(distancia<distanciaCritica)        // Checa se a distancia atual é menor que a distancia critica
  {
  tone(pinoBuzzer,2000);              // Se sim, toca continuamente o buzzer com frequencia de 2kHz
  }
  else                                 // Senão checa distancia e toca o buzzer com intervalo baseado na distancia 
  {
   noTone(pinoBuzzer);                // Para o buzzer caso esteja ligado
   tempoEspera=distancia*10;          // Calcula o tempo de espera como 10x a distancia
   tone(pinoBuzzer,2000,100);             // Toca o Buzzer com frequencia de 2 kHz 
   delay(tempoEspera);                // Espera o tempo calculado
   }
}
