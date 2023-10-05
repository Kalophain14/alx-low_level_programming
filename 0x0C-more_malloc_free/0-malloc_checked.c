#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: size of new memory
 * Return: poinyer to new memory allocated b
 */

void *malloc_checked(unsigned int b)
{
	char *result;

	result = malloc(b); /**b represents the size of memory allocated*/

	if (result == NULL)
		exit(98);
	else
		return (result);
}
