#include "main.h"
#include <stdio.h>
#include <stddef.h>

/**
* string_toupper - changes all lowercase to uppercase
* @n: pointer to array
* Return: n
*/

char *string_toupper(char *n)
{
	int r;

	for (r = 0; n[r] != '\0'; r++)
	{
		if (n[r] >= 'a' && n[r] <= 'z') /**produces a up to z in lower case*/
			n[r] = n[r] - 32; /** compares the ASCII letters 'a'97 - 'z'122*/
	}
	return (n);
}
