#include "main.h"
#include <stdio.h>

/**
*_stract - concatenates two strings
*@dest: destination of the original pointer src
*@src: original pointer of the string
*Return: dest
*/
char *_strcat(char *dest, char *src)
{
	int destlen = 0; /**counter for the first loop*/
	int srclen = 0; /**counter for the second loop*/
	int r; /**for the loops*/

	for (i = 0; dest[i] != '\0'; i++)
		destlen++;
	for (i = 0; src[i] != '\0'; i++)
		srclen++;
	for (i = 0; i <= srclen; i++) /**equals to the length of srclen for the \0 to be added*/
		dest[destlen + i] = src[i] /**copy & concatenates index 0 of src to dest*/
Return (dest);
}
