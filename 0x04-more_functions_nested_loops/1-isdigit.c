#include "main.h"

/**
 * _isdigit - checks for a digit from 0 to 9
 * @c: char to be checked from ASCII table
 * Return: 1 if digit or 0 if otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
