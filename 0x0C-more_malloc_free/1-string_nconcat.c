#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* string_nconcat - concatenates two strings
* @s1: first string
* @s2: seciond string
* @n: bytes concatenated from s2 to s1
* Return: concatenated string
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1length = 0;
	unsigned int s2length = 0;
	char *result;
	unsigned int r;

	/**treat s1 & s2 as empty strings*/
	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";
	/**length of s1 & s2*/
	for (r = 0; s1[r] != '\0'; r++)
		s1length++;
	for (r = 0; s2[r] != '\0'; r++)
		s2length++;
	/**allocate the memory*/
	result = malloc(sizeof(char) * (s1length + n) + 1);

	if (result == NULL)
		return (NULL);
	/**concatenating*/
	if (n >= s2length)
	{
		for (r = 0; s1[r] != '\0'; r++)
			result[r] = s1[r];
		for (r = 0; s2[r] != '\0'; r++)
			result[s1length + r] = s2[r];
		result[s1length + r] = '\0'; /*addling null terminator to s1*/
	}
	else
	{
		for (r = 0; s1[r] != '\0'; r++)
			result[r] = s1[r];
		for (r = 0; r < n; r++) /**concatinate until length n*/
			result[s1length + r] = s2[r];
		result[s1length + r] = '\0';
	}
	return (result);
}
