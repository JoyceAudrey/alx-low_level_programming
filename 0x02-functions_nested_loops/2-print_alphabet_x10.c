#include "main.h"

/**
 * Description: prints alphabet 10 times in lowercase
 *
 * Return: Always 0
 */

void print_alphabet_x10(void);
{
	char x;
	int i;

	i = 0;

	while (i < 10)
	{
	for (x = 97; x <= 122; x++)
	{
	_putchar(x);
	}
	_putchar('\n');
	i++;
	}
}


