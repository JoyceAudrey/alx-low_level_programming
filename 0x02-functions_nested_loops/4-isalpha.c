#include "main.h"

/**
 * _isalpha - function checks for alphabetic character
 *
 * @c: character to be checked
 *
 * Return: 1 for aphabetic character otherwise 0
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 98) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
