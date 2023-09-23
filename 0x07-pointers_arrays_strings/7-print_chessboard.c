#include "main.h"
/**
 * print_chessboard - Entry point
 * @a: array
 * Return: Always 0 (Success)
 */
void print_chessboard(char (*a)[8])
{
	int r;
	int t;

	for (r = 0; r < 8; r++) /**prints out rows*/
	{
		for (t = 0; t < 8; t++) /**prints out column*/
			_putchar(a[r][t]);
		_putchar('\n');
	}
}
