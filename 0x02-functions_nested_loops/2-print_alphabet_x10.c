#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet in lowercase
 *
 * add a new line
 */
void print_alphabet_x10(void)
{
	char x;
	int y;

	y = 0;

	while (y < 10)
	{
		x = 97;
		while (x <= 122)
		{
			_putchar(x);
			x++;
		}
		_putchar('\n');
		y++
	}
}

