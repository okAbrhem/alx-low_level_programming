#include<stdio.h>

/**
 * main - Entry point for printing lower case letters to stdout
 * putchar - prints characters to stdout
 * ch - a variable to store characters
 *
 * Return: Always 0(Success)
 */


int main(void)
{
char ch = 'a';
while (ch <= 'z')
{
	putchar(ch);
	ch++;
}
putchar('\n');
return (0);
}
