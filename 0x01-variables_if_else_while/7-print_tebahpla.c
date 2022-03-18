#include<stdio.h>

/**
 * main - Entry point
 * ch - variable used to store characters
 * putchar - used to print characters to stdout
 *
 * Return: Always 0(Success)
 */

int main(void)
{
char ch = 'z';

	while (ch >= 'a')
	{
	putchar(ch);
	--ch;
	}
putchar('\n');
return (0);
}


