#include "main.h"

/**
 * more_numbers -  function that prints 10 times the numbers from 0 to 14
 * Return: No return value
 */
void more_numbers(void)
{
	int a;
	int b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 15; b++)
		{
			if (b >= 10)
			{
				_putchar(b / 10 + '0');
			}
		_putchar(b % 10 + '0');
		}
		_putchar('\n');
	}
}
