#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet in lowercase
 *
 * add a new line
 *
 *Return: 0
 */
void print_alphabet_x10(void)
{
	int x;
	int y;

	for (x = 1; x <= 10; x++)
	{
		for (y = 97; y <= 122; y++)
		{
			_putchar(y);
		}
		_putchar('\n');
	}
}

