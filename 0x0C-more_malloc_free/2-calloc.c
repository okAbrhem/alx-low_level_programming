#include "main.h"
#include <stdlib.h>

/**
 * _calloc - reserves memory for an array of strings
 * @nmemb: number of elements
 * @size: size of member elements
 * Return: pointer to the reserved memory area
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	int i, j;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	j = (nmemb * size);
	arr = malloc(j);

	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < j; i++)
	{
		arr[i] = 0;
	}
	return (arr);
}
