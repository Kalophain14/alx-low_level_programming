#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* cap_string - a function that capitalizes all words of a string.
* @str: The string to be capitalized.
* Return: pointer to the changed string.
*/

char *cap_string(char *str) /** added str as the pointer didnt have an array*/
{
	int r;

	for (r = 0; str[r] != '\0'; r++)
	{
		if (str[r] >= 'a' && str[r] <= 'z') /**checks all char are lower case*/
		{
			if (
				str[r - 1] == ' ' ||
				str[r - 1] == '\t' ||
				str[r - 1] == '\n' ||
				str[r - 1] == ',' ||
				str[r - 1] == ';' ||
				str[r - 1] == '.' ||
				str[r - 1] == '!' ||
				str[r - 1] == '?' ||
				str[r - 1] == '"' ||
				str[r - 1] == '(' ||
				str[r - 1] == ')' ||
				str[r - 1] == '{' ||
				str[r - 1] == '}' ||
				r == 0
			)
			{
				str[r] -= 32; /**converts lower to upperase*/
			}
		}

	}
	return (str);
}
