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

/* Programa introdutório em Arduino - Sensor de distancia
v1.0 - Abril de 2015
-------------------Hardware------------------
- Sensor de distancia ultrassonico HC-SR04
*/

#include <sensorUltrassonico.h> // inclui bibilioteca do sensor ultrassonico

int pinoTrigger=13;        // define pino de trigger
int pinoEcho=12;          // define pino de Echo
float distancia;
long tempo;

sensorUltrassonico meuSensor(pinoTrigger, pinoEcho); // definição da instancia do sensor


void setup() {
  // Coloque aqui o codigo para rodar apena uma vez:

  Serial.begin(9600); // inicia a porta serial
  Serial.println("Tempo [us] \t Distancia [cm]");

}

void loop() {
  // Coloque aqui o codigo para rodar repetidas vezes:
  
  distancia=meuSensor.medeDistancia();  // Mede a distancia em cm
  tempo=meuSensor.medeTempo();          // Mede o tempo de resposta do sensor
  Serial.print(tempo);                  // imprime na serial o tempo de resposta
  Serial.print("\t\t");                 // Imprime dois espações (tab)
  Serial.println(distancia);            // Imprime na serial a distancia em cm
  delay(1000);                          // Espera 1000 ms ou 1 s
}
