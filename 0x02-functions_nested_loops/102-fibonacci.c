#include<stdio.h>
/**
 * main - entry for code block
 * for -iterates until the specified number
 * printf - prints integer
 *
 * Return: 0 (Success)
 */
int main(void)
{
	long int i = 1, j = 2, fibonacci_ser = 3, k;

	printf("%ld, %ld, ", i, j);

	for (k = 0; k < 47; k++)
	{
		printf("%ld, ", fibonacci_ser);

		i = j;
		j = fibonacci_ser;

		fibonacci_ser  = i + j;

		if (k == 46)
		{
			printf("%ld", fibonacci_ser);
		}
	}
	printf("\n");
	return (0);
}
