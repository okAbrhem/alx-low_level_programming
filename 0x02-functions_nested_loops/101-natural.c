#include<stdio.h>
/**
 * main - entry for code block
 * for - iterates until condition is false
 * if - checks number is multiple of 3 or 5
 * printf - prints integers to standard output
 * Return: Always 0(Success)
 */
int main(void)
{
	int i, j, sum;

	i = 1024;

	sum = 0;

	for (j = 1; j < i; j++)
	{
		if ((j % 3 == 0) || (j % 5 == 0))
		{
			sum = sum + j;
		}
	}
	printf("%d", sum);
	printf("\n");

	return (0);
}

