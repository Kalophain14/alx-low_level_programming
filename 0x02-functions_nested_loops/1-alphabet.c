#include "main.h"
/**
*print_alphabet - function that prints out lower alphabet letters
*Return: 0
*/

void print_alphabet(void)
{
	char lower;

	for (lower = 'a'; lower <= 'z'; lower++)
		_putchar(lower);
_putchar('\n');
}
