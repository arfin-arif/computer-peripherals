#include<reg51.h>
void main()
{
 SCON=0x50;
TMOD=0x20;
TH1=-3;
TR1=1;
SBUF='A';
while(TI==0)
TI=0;
}