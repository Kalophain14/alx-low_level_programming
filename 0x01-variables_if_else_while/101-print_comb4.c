#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0
*/
int main(void)
{
	int num1;
	int num2;
	int num3;

	for (num1 = '0'; num1 <= '7'; num1++)
	{
		/*The first for loop states that num1 will start from 0 - 7*/
		for (num2 = num1 + 1; num2 <= '8'; num2++)
		{
			/*The second loop will state that the num2 1 - 8*/
			for (num3 = num2 + 1; num3 <= '9'; num3++)
			{
				/*The 3rd loop state that it will num3 2-9*/
				if ((num2 != num1) != num3)
				{
					putchar(num1);
					putchar(num2);
					putchar(num3);
				}
				if (num1 == '7' && num2 == '8')
				{
					putchar('\n');
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
		}

	}
return (0);
}
