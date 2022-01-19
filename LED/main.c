/*
   File:   main.c
   Author: dmb57

   Created on 19 de Abril de 2016, 21:06
 */
#include "basico.h"
#include "config.h"

void main(void) {
    //configuração do sistema 
    TRISA = 0x00;     //config da porta A 
    TRISE = 0x00;     //config da porta E 
    BitClr(INTCON2, 7);    //liga pull up 
    ADCON1 = 0x0E;     //config AD 
    BitSet(PORTA, 5);    //liga o 1o display 
    BitSet(PORTA, 2);     //liga o 2o display 
    BitSet(PORTE, 0);     //liga o 3o display 
    BitSet(PORTE, 2);     //liga o 4o display 
    TRISD = 0x00;     //config. a porta D 
    for (;;) {

    }
}