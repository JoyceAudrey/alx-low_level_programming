#include "main.h"

/**
 * print_sign - function prints the sign of a number
 * @n: is the number to be checked
 * Returns: 1, for positive number, -1, negative number and 0 for anything else
 */

int print_sign(int n)
{
	if (n > 0)
	{
	_putchar(43);
	return (1);
	}
	else if (n < 0)
	{
	_putchar(45);
	return (-1);
	}
	else
	{
	_putchar(48);
	return (0);
	}
}
