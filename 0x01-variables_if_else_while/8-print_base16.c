#include<stdio.h>

/**
 * main -Entry point
 *
 *
 *
 *
 * Return: Always 0(Success)
 */

int main(void)
{
	int var = 0;
	char ch = 'a';

	while (ch <= 'f')
	{
	while (var < 10)

	{
	putchar(var + '0');
	var++;
	}

	putchar(ch);
	ch++;
	}

	putchar('\n');
	return (0);
}

