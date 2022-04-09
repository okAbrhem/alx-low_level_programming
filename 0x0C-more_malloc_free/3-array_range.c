#include "main.h"
#include <stdlib.h>

/**
 * array_range - conatenates two integer arrays
 * @min: minimum value
 * @max: maximum value
 *
 * Return: pointer to the newly created array,
 *         NULL if min > max or  malloc fails
 */

int *array_range(int min, int max)
{
	int *intarr;
	int i, j;

	if (min > max)
	{
		return (NULL);
	}

	j = min;

	intarr = (int *) malloc(sizeof(int) * (max - min + 1));

	if (intarr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= (max - min); i++)
	{
		intarr[i] = j;
		j++;
	}
	return (intarr);
}
