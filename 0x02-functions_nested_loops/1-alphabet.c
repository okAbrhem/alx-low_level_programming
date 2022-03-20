#include "main.h"
/**
 * print_alphabet - a function defined to print lower case letters in c
 * ch - a character variable to strore alphabets
 * putchar - function to print a character in C
 *
 *
 * return: void
 */

void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}

