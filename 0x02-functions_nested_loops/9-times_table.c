#include "main.h"
/**
 * times_table - prints 9x table of integers
 * i,j,product - variables to store integers
 * for - loop iterates over some condition
 * if - checks for condition
 * putchar - print integer for these specific example
 *
 *
 *Return: nothing
 */
void times_table(void)
{
int i, j, product;
for (i = 0; i <= 9; i++)
{
	_putchar('0');
	for (j = 1; j <= 9; j++)
	{
		_putchar(',');
		_putchar(' ');

	product = i * j;
	if (product <= 9)
	{
	_putchar(' ');
	}
	else
	{
	_putchar((product / 10) + '0');
	}
	_putchar((product % 10) + '0');
	}
	_putchar('\n');
}
}

