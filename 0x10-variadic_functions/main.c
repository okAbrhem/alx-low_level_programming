#include "variadic_functions.h"
#include <stdio.h>

/**
 *
 *
 *
 *
 */

int main(void)
{
	int sum;
	sum = sum_them_all(2, 98, 1024);
	printf("%d", sum);
	sum = sum_them_all(4, 98, 1024, 402, -1024);
	printf("%d", sum);
	return (0);
}
