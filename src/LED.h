#ifndef LED_h
#define LED_h

#include <Arduino.h>



/**
 * @class Led
 * @brief Classe para controlenão bloqueante de um LED.
 * Permite ligar, desligar, ligar por tempo determinado, 
 * piscar continuamente e piscar por quantidade definida.
 * 
 * @note O método update() deve ser chamado continuamente dentro do loop().
 */
class Led
{
   private:
      uint8_t pino; 
      bool estado; //atributo
      bool desligarPorTempo = false;
      uint32_t desligarNoMomento;

      uint32_t tempoAnteriorPiscar;
      uint32_t tempoEspera;
      bool estadoPiscar;
      uint16_t repeticoes;

/**
 * @brief Processa a lógica de piscada do LED.
 */
      void funcaoPiscar();

/**
 * @brief Processa o desligamento temporizado.
 */
      void funcaoDesligamento();


   public:
   /**
    * @brief Constroi um objeto LED.
    * @param pin Número do pino digital onde o Led está conectado.
    */
      Led(uint8_t pin); 

      /**
       * @brief Liga o LED continuamente.
       */
      void ligar();

      /**
       * @brief Liga o LED por um tempo deterinado.
       * @param tempoLigado_ms Tempo, em milissegundos, que o LED ficará ligado.
       */
      void ligar(uint32_t tempoLigado_ms);

      /**
       * @brief Desliga o LED e cancela os modos automáticos.
       */
      void desligar(); //OK

      /**
       * @brief Inicia a piscada contínua em 1 Hz.
       */
      void piscar();

      /**
       * @brief Inicia a piscada a uma frequencia definida.
       * @param frequencia Frquência da piscada em hertz.
       */
      void piscar(float frequencia);

      /**
       * @brief Pisca o LED uma quantidade definida de vezes.
       * @param frequencia Frequência da piscada em hertz.
       * @param repeticoes Quantidade de piscadas completas.
       */
      void piscar(uint8_t frequencia, uint16_t repeticoes);

      /**
       * @brief Indica o estado do LED.
       */
       bool getEstado();

       /**
        * @brief Retorna o pino configurado para o LED.
        */
      uint8_t getPino();

      /**
       * @brief Define manualmente o estado do LED.
       * @param estado true para ligado, false para desligado.
       */
      void setEstado(bool estado);

      /**
       * @brief Alterna o estado do LED.
       */
      void alternar();

      /**
       * @brief Atualiza as saídas.
       */
      void update();


};


#endif