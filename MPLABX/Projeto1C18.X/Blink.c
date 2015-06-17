#include "SanUSB48.h"

#pragma interrupt interrupcao //Tem que estar aqui ou dentro do firmware.c
void interrupcao(){
                  }

void main(){
clock_int_48MHz();

while(1)
{
if(!entrada_pin_e3){Reset();}//pressionar o botão para gravação

inverte_saida(pin_d7);
tempo_ms(100);

inverte_saida(pin_b7);
tempo_ms(100);
}
}
