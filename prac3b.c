#include<reg51.h>

void delay(void);
void main(void)
	{
		while(1){
   P1=0xAA;
	delay();
  P1=0x55;
   delay();			
		}
	}
	
void delay()
{
   unsigned int i,j;
	for(i=0;i<23;i++)
	{
		for(j=0;j<1000;j++)
		{
		}
		
	}
}	