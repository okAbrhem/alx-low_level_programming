#include "3-calc.h"
#include <stdio.h>

/**
 * op_add - returns sum of a and b
 * @a: parameter 1
 * @b: parameter 2
 * Return: a + b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the difference
 * @a: parameter 1
 * @b: parameter 2
 * Return: a - b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the product
 * @a: parameter 1
 * @b: parameter 2
 * Return: a * b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_mod - returns modulo
 * @a: parameter 1
 * @b: parameter 2
 * Return: a % b
 */
int op_mod(int a, int b)
{
	return (a % b);
}

}
