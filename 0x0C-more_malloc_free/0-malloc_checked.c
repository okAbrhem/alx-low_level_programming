#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - assignes memory using malloc
 * @b: lenght to be assigned for
 *
 * Return: pointer to the reserved space,otherwise normal termination with 98
 */


void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);

	if (a == NULL)
	{
		exit(98);
	}

	return (a);
}
