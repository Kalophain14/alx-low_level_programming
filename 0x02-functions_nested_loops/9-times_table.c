#include "main.h"
/**
*times_table - prints the 9 times table, starting with 0
*/

void times_table(void)
{
	int a;
	int t;
	int output;

	for (a = 0; a < 10; a++)
	{ /*determines the number of lines we gonna print out of 0 - 9*/

		for (t = 0; t < 10; t++)
		{
			output = a * t;
			if (t == 0)
			{
				_putchar(output + '0');
				/**prints out the vertical "0"*/
			}

			if (output < 10 && t != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(output + '0');

			}
			else if (output >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((output / 10) + '0');
				_putchar((output % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
