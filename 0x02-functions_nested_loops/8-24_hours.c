#include "main.h"
/**
 * jack_bauer - printes every minutes if the day
 * i,j - variables to store hour and minutes of the day
 * _putchar - printes characters to the screen
 *
 *
 *
 * Return: nothing
 */
void jack_bauer(void)
{
	int i, j;
for (i = 0; i <= 23; i++)
{
for (j = 0; j <= 59; j++)

	{
	_putchar(i / 10 + '0');
	_putchar(i % 10 + '0');
	_putchar(':');
	_putchar(j / 10 + '0');
	_putchar(j % 10 + '0');
	_putchar('\n');



	}
}
}
