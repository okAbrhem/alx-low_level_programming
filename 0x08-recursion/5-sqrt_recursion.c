#include "main.h"
/**
 * _sqrt - returns square roo of a natural number
 * @i: number to be checked
 * @j: sqaue root of the numner
 *
 * Return: j if perfect sqaure, - if not perfect sqaure
 */
int _sqrt(int i, int j)
{
	if (j * j == i)
	{
		return (j);
	}
	else if (j * j > i)
	{
		return (-1);
	}
	return (_sqrt(i, j + 1));
}

/**
 * _sqrt_recursion - returns sqaure root of a pefect square
 * @n: argument to be checked
 *
 * Return: sqaure root of an argument
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
