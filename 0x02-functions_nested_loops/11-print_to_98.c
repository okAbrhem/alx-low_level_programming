#include "main.h"
/**
 * print_to_98 - function to exexcutes integers to 98 in any order
 * @n: variable to be checked
 * if - checks the condition
 * while -iterates of the condition
 * printf - prints integers to screen
 *
 * Return: Always 0(Success)
 */

void print_to_98(int n)
{
if (n <= 98)
{
while (n < 98)
{
printf("%d, ", n++);
}
printf("%d\n", n);
}
else
{
while (n > 98)
{
printf("%d, ", n--);
}
printf("%d\n", n);
}
return (0)
}
