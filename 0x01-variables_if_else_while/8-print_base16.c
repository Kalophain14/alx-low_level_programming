#include <stdio.h>
/**
*main - Entry point
*
*Return: Always 0
*/

int main(void)
{
	int i;
	char t;

	for (i = 0 ; i < 10 ; i++)
		putchar(i + '0');
	for (t = 'a' ; t <= 'f' ; t++)
		putchar(t);
	putchar('\n');
return (0);
}
