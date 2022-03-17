#include<stdio.h>

/**
 * main - Entry point for printing lower and upper case letters
 * putchar - used to print characters to stdout
 * ch1 - variable used to store lowercase characters
 * ch2 - variable used to store uppercase characters
 *
 *
 * Return: Always 0(Success)
 */

int main(void)
{
	char ch1 = 'a';
	char ch2 = 'A';

	while (ch2 <= 'Z')
	{
		while (ch1 <= 'z')
		{
			putchar(ch1);
			ch1++;
		}
		putchar(ch2);
		ch2++;
	}
	putchar('\n');
	return (0);
}
