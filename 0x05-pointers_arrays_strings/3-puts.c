#include "main.h"
/**
 * _puts - prints characters
 * @str: string to be printed to stdout
 * while - loops over the integer
 * _putchar - prints string
 *
 *
 * Return: nothing
 */

void _puts(char *str)
{
while (*str)
{
_putchar(*str++);

}
_putchar('\n');
}
