#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - returns sum of variadic variables
 * @n: first argument
 *
 * Return: sum, 0 otherwise
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list ap;

	va_start(ap, n);
	sum = 0;

	for (i = 0; i < n; i++)
	{
		if (n == 0)
		{
			return (0);
		}

		sum += va_arg(ap, int);
	}
	va_end(ap);

	return (sum);
}
