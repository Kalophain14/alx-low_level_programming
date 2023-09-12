#include "main.h"
/**
*print_alphabet_x10 - prints lower alphabet 10 times
*followwed by a new line
*Return; 0
*/

void print_alphabet_x10(void)
{
	char lower;
	int i;

	i = 0;

	while (i < 10)
	{
		lower = 'a';

		while (lower <= 'z')
		{
			_putchar(lower);
			lower++;
		}
	_putchar('\n');
	i++;
	}
}
