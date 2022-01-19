/*
   File:   main.c
   Author: dmb57

   Created on 19 de Abril de 2016, 20:19
 */
#include "basico.h"
#include "config.h"

void main(void) {
    //Infinite loop
    unsigned char i, j;
    TRISD = 0x00;
    PORTD = 0x00;
    
    for (;;) {
        PORTD = 0xFB; //Acende verde
        tempoSegundos(4); //4 segundos
        
        PORTD = 0xFD; //Acende amarelo
        tempo(0xFF); //250ms
        tempo(0xFF); //250ms
        
        PORTD = 0xFE; //Acende Vermelho
        tempoSegundos(5); //5 segundos
    }
}
