#include<stdio.h>

/**
 * main - entry for everything in c
 * i - variable to store numbers
 * j - variable to store numbers
 * for - loop for iteration over some conditions
 * putchar - function to print charatcters onto stdout
 *
 *
 *
 *Return: Alwways 0(Success)
 */

int main(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (i < j)
			{
				putchar(i + '0');
				putchar(j + '0');
				if (i != 8 || (i == 8 && j != 9))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
