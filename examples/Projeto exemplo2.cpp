#include <LED.h>
#include <Arduino.h>

/**
 * Este exemplo demonstra como ligar e desligar um LED utilizando a biblioteca LED junto com a função delay().
 */
Led led1(45);

void setup()
{

    led1.ligar();
    led1.update();
    delay(3000);

    led1.desligar();
    led1.update();
}

void loop()
{
    // ledVermelho.update();
}