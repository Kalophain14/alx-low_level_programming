#include <stdio.h>
#include "main.h"
/**
*positive_or_negative - prints out 0
*@t: is the interger in check
*/

void positive_or_negative(int t)
{
	if (t > 0)
		printf("*%d is positive\n", t);
	else if (t == 0)
		printf("%d is zero\n", t);
	else
		printf("%d is negative\n", t);
}
