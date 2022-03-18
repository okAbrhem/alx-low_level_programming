#include<stdio.h>

/**
 * main - Entry point for everything
 * a - variable to store integers
 * putchar - prints integers for this specific problem
 *
 *
 * Return: Always 0(Success)
 *
 */

int main(void)
{
int a = 0;

while (a < 10)
{
putchar(a + '0');
a++;
}
putchar('\n');
return (0);
}
