#include<stdio.h>
/**
 * main - entry point for code block
 * _putchar - prints integers in this specific project
 * i,j - variables to store integers
 * for - loop iterates over the condition
 * if - checks  for the condition
 *
 *
 * Return: nothing
 */
int main(void)
{
int i, j;
for (i = 0; i <= 98; i++)
{
	for (j = i + 1; j <= 99; j++)
	{
		putchar((i / 10) + '0');
		putchar((i % 10) + '0');
		putchar(' ');
		putchar((j / 10) + '0');
		putchar((j % 10) + '0');

		if ((i != 98) || (i == 98 && j != 99))
		{
			putchar(',');
			putchar(' ');
		}
	}
}
putchar('\n');
return (0);
}
