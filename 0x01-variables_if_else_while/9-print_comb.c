#include<stdio.h>

/**
 * main -Entry point
 * a - variable to store integers
 * putchar - function to write to stdout
 *
 *
 *
 * Return: Always 0(Success)
 */

int main(void)
{
	int a = 0;
while (a <= 9)
{
putchar(a + '0');
if (a == 9)
{
break;
}
putchar(',');
putchar(' ');
a++;
}
putchar('\n');
return (0);
}
