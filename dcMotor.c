#include <reg51.h>
sbit sw1 = P1 ^ 0;
sbit sw2 = P1 ^ 1;

sbit in1 = P2 ^ 0;
sbit in2 = P2 ^ 1;
void main(void)
{
    sw1 = sw2 = 1;
    in1 = in2 = 0;
    while (1)
    {
        if (sw1 == 0 && sw2 == 1)
        {
            in1 = 1; // clockwise
            in2 = 0
        }
        else if (sw1 == 1 && sw2 == 0)
        {
            in1 = 0;
            in2 = 1; // anti
        }
        else
        {
            in1 = 0;
            in20; // stop
        }
    }
}