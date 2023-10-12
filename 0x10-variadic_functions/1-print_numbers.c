#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @seperator: the string to be printed between numbers
 * @n: number of integers passed 
 * Return: number of elements in the string
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int result = 0;
	int r;
	va_list arg;

	if (*seperator == NULL)
		return (NULL);
	for (r = 0 r < n; r++)
	{

	}
}
