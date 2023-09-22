#include "main.h"
#include <stdio.h>

/**
* rot13 - encoder rot13
* @s: pointer to string params
* Return: s
*/

char *rot13(char *s)
{
	int r;
	int t;
	char src[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char destrot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (r = 0; s[r] != '\0'; r++)
	{
		for (t = 0; t < 52; t++)
		{
			if (s[r] == src[t])
			{
				s[r] = destrot[t];
				break;
			}
		}
	}
	return (s);
}

