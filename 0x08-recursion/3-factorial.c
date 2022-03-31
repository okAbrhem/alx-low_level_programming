#include "main.h"
/**
 * factorial - return factorial of a given number
 * @n: parameter to be checked
 *
 * Return: 1 if n is 1 or 0, -1 if n is lower than 0, factorial of a number
 */
int factorial(int n)
{
	if (n == 0 || n == 1)
	{
		return (1);
	}

	if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
