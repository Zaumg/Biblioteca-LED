#include <Led.h>
#include <Arduino.h>


/**
 * Este código faz o LED acender e apagar repetidamente por 5 vezes, utilizando a biblioteca LED junto com um o comando (for) e a função delay().
 */

Led led1(45);

void setup()
{

for (int i = 0; i < 5; i++)
 {
led1.ligar();
led1.update();
delay(500);

led1.desligar();
led1.update();
delay(500);

}

}

void loop() 
{
led1.update();

}