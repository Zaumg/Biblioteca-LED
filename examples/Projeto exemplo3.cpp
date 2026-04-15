#include <Led.h>
#include <Arduino.h>


/**
 * Esse código exemplo utiliza a biblioteca LED para fazer o LED piscar automaticamente em número determinado de vezes. 
 * O LED é configurado para piscar 15 vezes com frequência de 2 Hz (2 piscadas por segundo).
 */


Led led1(45);

void setup()
 {
led1.piscar(2, 15); // piscar 15 vezes

}

void loop()
 {
led1.update();

}