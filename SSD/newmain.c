#include "pic18f4520.h"
#include "config.h"
#include "ssd.h"
void main(void) {
 float tempo;
 unsigned int cont=0;
 TRISC = 0X00;
 PORTC= 0X00;
 ssdInit();
 for (;;) {
    cont++;
    ssdDigit(((cont/20) %10), 0); //0.1s
    ssdDigit(((cont/200)%10), 1); //1s
    ssdDigit(((cont/2000)%10), 2); //10s
    ssdDigit(((cont/12000)%10), 3); //60s 1min
  
    if(cont==2000){
       PORTC =0XFF; 
        
    }
    if(cont==4000){
       PORTC =0X00; 
        
    }
    
    ssdUpdate();
    for (tempo = 0;tempo < 30;tempo++); // +- 10ms
 }
}
