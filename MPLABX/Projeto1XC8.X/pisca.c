#include "SanUSB1X.h"
//bit A, B, saida, ledpisca;

//#pragma interrupt interrupcao
void interrupt interrupcao() { //Declaração de interrupção no XC8
}

void main() {
    clock_int_4MHz();

    while (1) {
        if (!entrada_pin_e3) {
            Reset();
        } //pressionar o botão para gravação

        inverte_saida(pin_b7);
        tempo_ms(500);
    }
}
