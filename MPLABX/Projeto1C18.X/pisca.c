#include "SanUSB1.h" // 
//short int A, B, saida, ledpisca;

#pragma interrupt interrupcao //Tem que estar aqui ou dentro do firmware.c
void interrupcao() {
}

void main() {
    clock_int_4MHz();

    while (1) {
        if (!entrada_pin_e3) {
            Reset();
        } //pressionar o botão para gravação
        
        inverte_saida(pin_b7);
        tempo_ms(500);

        /*
        ledpisca = !ledpisca; // ledpisca é igual ao inverso de ledpisca
        saida_pino(pin_b7, ledpisca); // b7 recebe o valor de ledpisca
        tempo_ms(100);
      
        A = entrada_pin_b1; //entrada com pull-down externo (resistor conectado ao Terra)
        B = entrada_pin_b2; //entrada com pull-down externo (resistor conectado ao Terra)

        saida = A^B; //saida é igual ao resultado do OU-Exclusivo obtida pelas entradas dos pinos A e B
        saida_pino(pin_b7, saida); //O pino_b7 mostra o resultado do circuito lógico booleano alocado em saida
        tempo_ms(100);
        //*/
    }
}


