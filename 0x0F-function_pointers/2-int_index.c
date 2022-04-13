#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * int_index - returns index of the first element
 * @array: array to be checked
 * @size: size of the array
 * @cmp: a function to compare index of an array
 *
 * Return: index of the first element if true
 *         -1 if no elements match or size is
 *         less than or equal to zero.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}

	if (size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
