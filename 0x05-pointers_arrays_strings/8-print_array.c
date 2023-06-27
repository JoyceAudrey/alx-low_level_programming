#include "main.h"
#include <stdio.h>

/**
 * print_array - function prints n elements of an array of integers
 * @a: the array of integers
 * @n: Number of elements of the array to be printed
 * Return: void
 */

void print_array(int *a, int n)

{
	int x;

	for (x = 0; x < n; x++)
	{
	printf("%d", a[x]);
	if (x != (n - 1))
	{
	printf(", ");
	}
	}
	printf("\n");
}
