#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal
 * @n: numer of times _ should be printed
 * Return: no return value
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int a;

		for (a = 1; a <= n; a++)
		{
			_putchar('_');
	}
		_putchar('\n');
	}
}
