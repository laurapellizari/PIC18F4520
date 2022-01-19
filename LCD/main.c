/*
   File:   main.c
   Author: dmb57

   Created on 19 de Abril de 2016, 15:32
 */

#include "config.h"
#include "basico.h"
#include "lcd.h"

void main(void) {
    InicializaLCD();
    
    printf("Hello World");
    for(;;);
}
