
/* ----------------  Algoritma---------------
- Luiz Carlos Pinage
- Armin Sonnenhohl
- Fausto Alcantara

Abril de 2015

Este programa Ã© um software livre e obedece a licenÃ§a PGL 3.0: Voce pode 
redistribui-lo e/ou modifica-lo respeitando os termos do GNU -General 
Public License publicado pela FundaÃ§Ã£o de Software Livre, versÃ£o 3.0 ou 
qualquer superior.
https://www.gnu.org/licenses/quick-guide-gplv3.html

*/

/* Biblioteca para sensor de distancia ultrassonico HC-SR04
v1.0 - Abril de 2015
-------------------Hardware------------------
- Sensor de distancia ultrassonico

Baseada na biblioteca Ultrassonic.h e virtualmix: http://goo.gl/kJ8Gl
*/

#include <stdlib.h>
#include <string.h>
#include <sensorUltrassonico.h>

#define rangeMaximo 200 // 400 cm ou 4 metros de range maximo do sensor

sensorUltrassonico::sensorUltrassonico(int pT, int pE)
    {
    pinMode(pT, OUTPUT);
    pinMode(pE, INPUT); 
	_pinoTrigger=pT;
	_pinoEcho=pE;
	_distancia=0;	
    }


long sensorUltrassonico::medeTempo()
    {
    digitalWrite(_pinoTrigger, LOW);
    delayMicroseconds(2);
    digitalWrite(_pinoTrigger, HIGH);
    delayMicroseconds(10);
    digitalWrite(_pinoTrigger, LOW);
    return pulseIn(_pinoEcho, HIGH);
    }

float sensorUltrassonico::medeDistancia()
    {
	digitalWrite(_pinoTrigger, LOW);
    delayMicroseconds(2);
    digitalWrite(_pinoTrigger, HIGH);
    delayMicroseconds(10);
    digitalWrite(_pinoTrigger, LOW);
    _distancia=((pulseIn(_pinoEcho, HIGH))/27.6233/2);
	if (_distancia >= rangeMaximo || _distancia <= 0) return -1;
	else return _distancia;
    }
	
	
	
