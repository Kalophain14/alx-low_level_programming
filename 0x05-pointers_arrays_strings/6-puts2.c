#include "main.h"
/**
* puts2 - function should print only one character out of two
* starting with the first one
* @str: the pointer
*/
void  puts2(char *str)
{
	int length = 0; /**length of the array*/
	int s = 0; /**start counts after the null navigator is removed*/
	int t; /** elements within the array*/
	char *r = str;

	while (*r != '\0')
	{
		r++;
		length++;
	}
	s = length - 1;
	for  (t = 0 ; t <= s ; t++)
	{
		if  (t % 2 == 0) /**0 indicates even numbers*/
	{
		_putchar(str[t]);
	}
	}
_putchar('\n');
}
