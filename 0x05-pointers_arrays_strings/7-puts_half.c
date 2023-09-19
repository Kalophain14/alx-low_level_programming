#include "main.h"
/**
* puts_half - a function that prints half of a string
* for half of string, n = (length_of_the_string - 1) / 2
* @str: input
*/
void puts_half(char *str)
{
	int r;
	int n;
	int counter = 0; 

	for (r = 0; str[r] != '\0'; r++)
		counter++;

	n = (counter - 1) / 2; /**seperate the length into half from last index*/

	for (r = n + 1 ; str[r] != '\0'; r++)
		_putchar(str[r]);  /**prints half of string starting from from middle index*/
	_putchar('\n');
}
