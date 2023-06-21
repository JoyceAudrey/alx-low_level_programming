#include "main.h"

/**
 * print_last_digit - function prints the last digit of a number
 * @n: the number
 *Return: value of the last digit in a number
 */

int print_last_digit(int n)
{
	int k;

	if (n < 0)
		n = -n;
	k = n % 10;

	if (k < 0)
		k = -k;

	_putchar(k + '0');

	return (k);
}
