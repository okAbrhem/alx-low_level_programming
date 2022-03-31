#include "main.h"
/**
 * _pow_recursion - returns x raised to y
 * @x: base variable
 * @y: exponenet variable
 *
 * Return: -1 if y is less than 0, 1 if y is 0, x raised to y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}

	return (x * _pow_recursion(x, y - 1));
}
