#include <mega16.h>
#include <delay.h>

// Declare your global variables here

void main(void)
{
PORTC=0x00;
DDRC=0x01;

PORTA=0x00;
DDRA=0x00;

while (1)
      {
      if(PINA.0==1){
          PORTC.0=1;
      }
      if(PINA.0==0){
          PORTC.0=0;
      }
  }
}
