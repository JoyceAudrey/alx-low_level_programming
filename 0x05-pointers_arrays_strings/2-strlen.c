#include "main.h"

/**
 * _strlen - function returns the length of a string
 *
 * @s: string that is to be checked
 *
 * Return: length of string
 */
size_t _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
		length++;

	return (length);
}
