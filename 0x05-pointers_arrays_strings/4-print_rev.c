#include "main.h"

/**
 * print_rev - function prints a string, in reverse
 * @s: string to print
 * return: 0
 */
void print_rev(char *s)
{
	int long = (0);
	int k;

	while (*s != '\0')
	{
		long++;
		s++;
	}
	s--;
	for (k = long; k > 0; k--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
