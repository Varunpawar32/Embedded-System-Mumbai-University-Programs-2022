#include<reg51.h>
 
 void delay()
   {
   int i,j;
     for(i=0;i<1000;i++)
	     {
	     }
     for(j=0;j<1000;j++)
       {
       }	 
   
   }
   
void main()
  {
    while(1)
     {
       P1=0xFF;
       delay();
       P1=0x00;
       delay();
     }
  }