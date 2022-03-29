#include "main.h"
#include <string.h>

/**
 * *_strchr - a function to locates a character in string
 * @s: sting to be checked
 * @c: character occurence to be checked in s
 *
 * Return: first occurence of c (success), NULL if not
 */

char *_strchr(char *s, char c)
{
int i, len;

len = strlen(s);

for (i = 0; i <= len; i++)
{
	if (c == s[i])
	{
		s += i;
		return (s);
	}
}
return ('\0');
}

