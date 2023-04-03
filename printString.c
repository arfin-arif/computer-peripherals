#include<reg51.h>
void send(char x);
void main(void)
{
	TMOD=0X20;
	TH1=0XFD;
	SCON=0X50;
	TR1=1;
			send('A');
			send('R');
		send('I');
	while(1);
}
void send(char x)
{
		SBUF=x;
		while(TI==0);
		TI=0;
}