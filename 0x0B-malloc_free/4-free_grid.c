#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a two dimensional array
 * @grid: matrix to be freed
 * @height: column of a 2D Matrix
 *
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i <= height; i++)
	{
		free(*(grid + i));
	}
	free(grid);
}
