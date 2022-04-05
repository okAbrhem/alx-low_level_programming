#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns pointer to 2D array
 * @width: width of the matrix
 * @height: height of the matrix
 *
 * Return: pointer to 2D array of integers
 */

int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j, mem_stat, h;

	if (width <= 0 || height <= 0)
	{
		return (0);
	}
	arr = malloc(height * sizeof(int *));

	if (arr == NULL)
	{
		return (0);
	}
	mem_stat = 0;

	for (i = 0; i < height; i++)
	{
		*(arr + i) = malloc(width * sizeof(int));

		if (*(arr + i) == 0)
		{
			mem_stat = 1;
			break;
		}

		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}
	if (mem_stat == 1)
	{
		for (h = 0; h <= j; j++)
		{
			free(*(arr + h));
		}
		free(arr);
	}
	return (arr);
}
