#include "main.h"
/**
 * print_last_digit - prints last digit of an integer
 * @n: integer to be checked
 * c - stores the reminder of modulo division
 * if - conditional statement to check for last digit sign
 * _putchar - prints integers in this specific project
 *
 * Return: last digit of the integer
 */
int print_last_digit(int n)
{
int c;
c = n % 10;
if (c >= 0)
{
	_putchar(c + '0');
}
else
{
c *= -1;
	_putchar(c + '0');

}
return (c);
}
