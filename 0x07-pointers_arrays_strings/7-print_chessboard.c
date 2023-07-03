#include "main.h"
/**
 * print_chessboard - function prints the chessboard
 * @a: array
 * Return: Always 0 (Success)
 */
void print_chessboard(char (*a)[8])
{
	int m;
	int j;

	for (m = 0; m < 8; m++)
	{
		for (j = 0; j < 8; j++)
			_putchar(a[m][j]);
		_putchar('\n');
	}
}
