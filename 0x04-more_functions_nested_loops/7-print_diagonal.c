#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line
 * @n: number of times the character \ is to be printed
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int x;
		int y;

		for (x = 0; x < n; x++)
		{
			for (y = 0; y < n; y++)
			{
				if (x == y)
				{
					_putchar('\\');
				}
				else if (y < x)
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
