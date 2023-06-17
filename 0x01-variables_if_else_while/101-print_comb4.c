#include <stdio.h>
/**
  *main - Entry point
  *
  * Description: 'print all possible different combinations of two digits'
  *
  * Return: Always 0
  */
int main(void)
{
	int n, m;

	for (n =0; n < 9; n++)
	{
		putchar(n + '0');
	}
	for (m = n +1; m < 10; m++)
	{
		putchar(m + '0');
	}
	if (n != 8 || m !=9)
	{
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
