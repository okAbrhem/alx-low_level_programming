#include "main.h"
#include <string.h>
/**
 * *_strpbrk - search a string for any of a set of bytes
 * @s: main string
 * @accept: characters to be checked
 *
 * Return: matching string 
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;

	while (s[a])
	{
		b = 0;
		
		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				s += i;
				return (s);
			}
			j++;
		}
		i++;
	}
	return ('\0');
}
