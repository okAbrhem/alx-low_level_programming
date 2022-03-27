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
	long int i = 0, j = 1, fibonacci_ser = 1, k, even_sum = 0;

	for (k = 0; k < 47; k++)
	{
		i = j;

		j = fibonacci_ser;

		fibonacci_ser = i + j;

		if ((fibonacci_ser % 2 == 0) && (fibonacci_ser <= 4000000))
		{
			even_sum = even_sum + fibonacci_ser;
		}
	}
	printf("%ld", even_sum);
	printf("\n");
	return (0);
}
