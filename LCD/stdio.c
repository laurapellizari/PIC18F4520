#include "stdio.h"
#include "lcd.h"

void printf(unsigned char[15] s){
    char i;
       
    for(i=0;i<15;i++){
        if(msg[i] == '\0')
        {
            EnviaComando(0xC0);
        }
        else
        {
            EnviaDados(msg[i]);
        }
        
    }
}
