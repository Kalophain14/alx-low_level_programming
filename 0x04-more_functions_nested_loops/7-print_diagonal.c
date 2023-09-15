#include "main.h"
/**
*print_diagonal - draws a diagonal line
*@n: number of times the character \ should be printed
*/

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int t;
		int b;

		for (t = 0; t < n; t++)
		{
			for (b = 0; b < n; b++)
			{
				if (b == t)
				{
					_putchar('\\');
				}
				else if (b < t)
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
