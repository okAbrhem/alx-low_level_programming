#include "main.h"
/**
 * print_rev - prints string in reverse order
 * @s: string to be checked
 * while - loop iterate over string
 * _putchar - prints characters
 *
 *
 * Return: nothing
 */

void print_rev(char *s)
{
while (*s)
{
_putchar(--*s);
}
_putchar('\n');
}
