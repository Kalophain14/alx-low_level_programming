#include "main.h"
#include <stdio.h>

/**
 *print_array - functions that prints n elements of an array of intergers
 *@a: the pointer of the array
 *@n: the number of elements
 */

void print_array(int *a, int n)
{
	int r;

	for (r = 0; r < n; r++)
	{
		printf("%d", a[r]); /**prints each index inside the arrary excluding '\0'*/

		if (r < n - 1) /**prints the , (space) until the elements 3 last part*/
		{
			printf(",");
			printf(" ");
		}
	}
printf("\n");
}
