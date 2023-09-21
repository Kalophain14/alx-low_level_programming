#include "main.h"
#include <stdio.h>

/**
 *reverse_array - reverses the conent of an array of intergers
 *@a: pointer array
 *@n: the number of elements in an array
 */

void reverse_array(int *a, int n)
{
	int r;
	int s;

	for (r = 0; r < n--; r++) /**original order*/
	{
		s = a[r]; /**stores the elements of r*/
		a[r] = a[n]; /**stores and swap each character in array*/
		a[n] = s; /**Reverse order*/
	}
}
