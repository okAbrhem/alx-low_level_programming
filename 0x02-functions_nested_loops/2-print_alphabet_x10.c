#include "main.h"

/**
 * print_alphabet_x10 - function used to print characters 10X
 * count -integer variable to store integers
 * ch - character variable to store characters to be printed
 * while - loop to execute a condition until it is false
 * for - loop iterate over some condition
 * _putchar - function to print characters in c
 *
 *
 * Return: Always 0(Success)
 */
void print_alphabet_x10(void)
{
int count = 0;
char ch;
while (count <= 9)
{
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
}
_putchar('\n');
count++;
}
}
