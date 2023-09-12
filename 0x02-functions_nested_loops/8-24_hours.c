#include "main.h"
/**
*jack_bauer - prints everytime of the day of Jack Baeur
*startime from 00:00 to 23:59
*/

void jack_bauer(void)
{
	int a;
	int t;

	a = 0;

	while (a < 24)
	{
		t = 0;
		while (t < 60)
		{
			_putchar((a / 10) + '0');
			_putchar((a % 10) + '0');
			_putchar(':');
			_putchar((t / 10) + '0');
			_putchar((t % 10) + '0');
			_putchar('\n');
			t++;
		}
	a++;
	}
}


