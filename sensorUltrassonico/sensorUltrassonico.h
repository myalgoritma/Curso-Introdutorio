
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

/* Biblioteca para sensor de distancia ultrassonico HC-SR04
v1.0 - Abril de 2015
-------------------Hardware------------------
- Sensor de distancia ultrassonico

Baseada na biblioteca Ultrassonic.h e virtualmix: http://goo.gl/kJ8Gl
*/

#ifndef SENSORULTRASSONICO_H
#define SENSORULTRASSONICO_H

#include <Arduino.h>

class sensorUltrassonico
    {
    public:
    sensorUltrassonico(int pT, int pE);
    long medeTempo();
    float medeDistancia();

    private:
    int _pinoTrigger;
    int _pinoEcho;
	float _distancia;
	};

	#endif // ULTRASONIC_H
