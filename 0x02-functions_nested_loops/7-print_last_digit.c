#include "main.h"
/**
*print_last_digit - prints the last digit of a number
*@a: is the character in int and in question
*Return: value of the last digit
*/

int print_last_digit(int a)
{
	int t; /**t will be the variable which we calculate the remainder of a)*/

	if (a < 0)
		a = -a;
	t = a % 10;

	if (t < 0)
		t = -t;
	_putchar(t + '0');

	return (t);
}
