#include "main.h"

/**
* print_square - prints a square
* @size: size of the square
*/
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int a;
		int t;

		for (a = 0; a < size; a++)
		{
			for (t = 0; t < size; t++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
