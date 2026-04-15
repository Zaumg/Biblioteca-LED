#include <Led.h>
#include <Arduino>


/**
 * Exemplo básico de uso da classe Led. Este código liga um LED de forma contínua utilizando a biblioteca LED.
 */

Led led1(45);

void setup()
 {
led1.ligar(); 

}

void loop()
{
led1.update();

}