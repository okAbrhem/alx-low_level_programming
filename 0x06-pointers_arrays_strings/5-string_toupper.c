#include "main.h"
#include <stdio.h>
/**
 * string_toupper - changes all lowercase letters to upper
 * @a: string to be checked
 *
 * Return: uppercase letter
 */

char *string_toupper(char *a)
{
	char *ptr = a;

	while (*a != '\0')
	{
		for (; *a >= 'a' && *a <= 'z';)
		{
			*a = *a - 32;
		}
		a++;
	}
	a = ptr;
	return (a);
}
