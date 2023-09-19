#include  "main.h"
/**
* rev_string - Reverses  a  string
* @s:  Input  string
*/

void rev_string(char *s)
{
	int r; /**the length of the array*/
	int t = 0; /**counter of array*/

	for (r = 0; s[r] != '\0'; r++)
		t++; /**counts the length*/
	for  (r  =  0;  r < t / 2; r++)
	{
		char q;

		q = s[r];
		s[r] = s[t - 1 - r];
		s[t - 1 - r] = q;
	}
}
