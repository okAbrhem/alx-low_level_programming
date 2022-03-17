#include<stdio.h>

/**
 * main - entry point for everything
 * ch - a variable that store all alphabetic characters
 * putchar - used to print letters to stdout
 *
 * Return: Always 0(Success)
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if ((ch == 'e') || (ch == 'q'))
		{
			ch++;
		}

		putchar(ch);
		ch++;

	}
		putchar('\n');
		return (0);

}
