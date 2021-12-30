#include <reg51.h>

sbit led=P3^3;

void Delay_us(int n)
{
	int x;

	while (n--)
	{
		x = 5000;
		while (x--);
	}

}

void main()
{
	led=1;
	while(1)
	{
		led=~led;
		Delay_us(100);
	}
}