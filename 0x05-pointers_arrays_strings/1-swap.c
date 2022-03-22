#include "main.h"
/**
 * swap_int - swap values of integers
 * @a: variable to be sawpped
 * @b: variable to be swapped
 * p - integer to store swaping variables
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int p = *a;
	*a = *b;
	*b = p;

}
