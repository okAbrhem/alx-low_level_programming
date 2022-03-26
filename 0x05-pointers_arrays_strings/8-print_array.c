#include "main.h"
#include <stdio.h>

/**
 * print_array - entry for code block
 * @a: array to be checked
 * @n: element of integer to be printed
 * while -  iterates over array
 *
 */

void print_array(int *a, int n)
{
int i;

for (i = 0; i < n; i++)
{
	printf("%d", (a[i]));

	if (i < n - 1)
	{
		printf(", ");
	}

}

printf("\n");
}
