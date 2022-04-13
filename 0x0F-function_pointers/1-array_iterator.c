#include <stdio.h>
#include "function_pointers.h"


/**
 * array_iterator - executes a function on an element of array
 * @array: an array
 * @size: size of a given array
 * @action: a function pointer
 *
 * Return: nothing
 */


void array_iterator(int *array, size_t size, void (*action)(int))

	size_t i;

	if (action != NULL && array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			(*action)(array[i]);
		}
	}
}
