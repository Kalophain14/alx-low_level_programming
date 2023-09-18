#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse
 * @s: string to be reversed
 */

void print_rev(char *s)
{
	int r = 0; /**length 64 characters*/
	int t; /**for loop reverse*/

	while (*s != '\0') /**Print out the length of the string*/
	{
		r++;
		s++;
	}
	s--;
	for (t = r; t > 0; t--) /**prints out the *s pointer in reverse*/
	{
		_putchar(*s);
		s--;
	}
_putchar('\n');
}
