#include "main.h"

#include<stdio.h>

/**
 * print_diagsums - prints sum of diagonal of a square matrix
 * @a: integer array 
 * @size: size of a sqaure matrix
 * printf - prints integer to stdout
 * for - loop for iteration
 * if - checks for condtion
 *
 * Return: nothing
 */

void print_diagsums(int *a, int size)
{
	int i, j;
	unsigned int sum;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				sum = sum + a[i][j];
			}
		}
	}
	printf("%d\n", sum);
}
