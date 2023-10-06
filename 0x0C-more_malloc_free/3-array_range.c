#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* array_range - creates an array of intergers
* @min: minimum value in the array
* @max:  maximum value in the array
* Return: new allocated memory
*/

int *array_range(int min, int max)
{
	int *result;
	int r;
	int size;

	if (min > max)
		return (NULL);
	/**allocating new memory*/
	size = (max - min) + 1;
	result = malloc(sizeof(int) * size);
	if (result == NULL)
		return (NULL);
	for (r = 0; min <= max; r++)
		result[r] = min++;
return (result);
}
