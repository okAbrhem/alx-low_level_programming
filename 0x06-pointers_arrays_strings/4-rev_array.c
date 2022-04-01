#include "main.h"
/**
 * reverse_array - reverses array of integers
 * @a: array to be reversed
 * @n: length of the array
 *
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int start, end, swapper;

	start = 0;

	end = n - 1;

	while (start < end)
	{
		swapper = a[start];
		a[start] = a[end];
		a[end] = swapper;
		start++;
		end--;
	}
}
