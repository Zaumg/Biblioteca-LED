#Biblioteca LED

Biblioteca simples para controle não bloqueante de LED com Arduino e ESP32.

A classe Led permite:

- Ligar o LED continuamente;
- Ligar por tempo determinado;
- Apagar;
- Alternar estado;
- Piscar continuamente;
- Piscar uma quantidade definida de vezes;
- O funcionamento é não bloqueante, usando millis().

- Por isso, o método update() deve ser chamado repetidamente dentro do loop().

---

#Estrutura da biblioteca

LED/

├── src/
   ├── LED.h
   └── LED.cpp
├── LICENSE
├── README.md
├── library.json
└── examples/
    ├── Projeto exemplo1: Liga um LED de forma contínua.
    ├── Projeto exemplo2: Liga e desliga o LED.
    ├── Projeto exemplo3: O LED pisca automaticamente numa frequência e quantidade determinada de vezes.
    ├── Projeto exemplo4: O LED acende e apaga 5 vezes repetidamente, utilizando a biblioteca LED junto com o comando FOR.
    ├── Projeto exemplo5: O programa verifica se o estado do LED for OFF (desligado), se sim, ele liga o LED por 2 segundos.
