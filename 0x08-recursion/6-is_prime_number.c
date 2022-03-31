#include "main.h"
/**
 * _prime - checks primeness of a number
 * @i: argument to be checked
 * @j: argument to check i
 *
 * Return: 1 if prime, 0 otherwise
 */
int _prime(int i, int j)
{
	if (i == j)
	{
		return (1);
	}
	else if (i % j == 0)
	{
		return (0);
	}
	return (_prime(i, j + 1));
}

/**
 * is_prime_number - checks if a number is prime or not
 * @n: number to be checked
 *
 * Return: 1 if number is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);

	}
	return (_prime(n, 2));
}
