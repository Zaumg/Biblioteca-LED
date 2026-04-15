#include <Led.h>
#include <Arduino.h>


/**
 * Nesse código exemplo, o programa vai verificar se o estado do LED for OFF (desligado), se sim, ele liga o LED por 2 segundos.
 */

Led led1(13);

void setup() 
{

}

void loop()
 {

     if (!led1.getEstado())
      {    
         led1.ligar(2000);

      }
      led1.update(); 
}