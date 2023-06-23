#include "main.h"
/**
 * _isupper -  checks for uppercase character
 * @c: char to be checked
 *
 * Return: 1 for uppercase or 0 for any else
 *
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
