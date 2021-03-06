#include <stdio.h>

/**
 * main - entry point for everything
 * putchar  - prints integers to the screen
 * i,j,k - variables to store integers
 * for - loop for interating over some condition
 * if - condition to check for something
 *
 *
 * Return: Always 0(Success)
 */

int main(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			for (k = 0; k <= 9; k++)
			{
				if ((i < j && i < k) && (j < k))
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(k + '0');
					if ((i != 7) || (i == 7 && j == 8 && k != 9))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
		putchar('\n');
		return (0);
}
