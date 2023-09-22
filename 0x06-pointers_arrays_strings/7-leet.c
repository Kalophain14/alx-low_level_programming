#include "main.h"
#include <stdio.h>

/**
 * leet - a function that encodes a string into 1337
 * @n: input value
 * Return: p value
 */
char *leet(char *p)
{
	int r;
	int s;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (r = 0; p[r] != '\0'; r++) /**prints all elements of n pointer but '0\'*/
	{
		for (s = 0; s < 10; s++)

		{
			if (p[r] == s1[s]) /**appends s1 array with n pointer*/
			{
				p[r] = s2[s]; /**appends s2 array with n pointer*/
			}
		}
	}
	return (p);
}
