#include "main.h"

/**
 *main- entry point
 *
 * print alphabet - prints alphabet in lowercase
 * Return: void
 */
void print_alphabet(void)
{
	int k;

	for (k = 97; k <= 122; k++)
	{
		_putchar(k);
	}
	_putchar('\n');
	return (0);
}
