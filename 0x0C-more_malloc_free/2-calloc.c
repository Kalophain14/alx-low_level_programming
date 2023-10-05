#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocated memory for an array
 * @nmemb: number of arrays members
 * @size: size of an array
 * Return: pointer to newly allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *result;

	if (nmemb == 0 || size == 0)
		return (NULL);
	/**allocate contigues to result*/
	result = calloc(nmemb, size);
	if (result == NULL)
		return (NULL);
	else
		return (result);
}
