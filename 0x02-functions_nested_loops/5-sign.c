#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n: integer to be checked
 * if - conditional statement to check for number sign
 * _putchar() - function to print characters to stdout
 *
 *
 * Return: 1 if positive, 0 if zero and -1 if negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
	_putchar('+');
	return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
	return (0);
	}
	else
	{
	_putchar('-');
	return (-1);
	}





}