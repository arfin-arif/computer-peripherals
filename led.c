#include<reg52.h>
sbit LED1 = P2^0;
sbit LED2 = P2^1;
sbit LED3 =P2^2;
void Delay(){
int i ,j;
	for(i=0;i<10;i++)
	for(j=0;j<10000;j++)
	{} }
void main()
{for(;;)
	{
		LED1=0;
		Delay();
		LED1=1;
		Delay();
		
		LED2=0;
		Delay();
		LED2=1;
		Delay();
		
		LED3=0;
		Delay();
		LED3=1;
		Delay();
	
}}