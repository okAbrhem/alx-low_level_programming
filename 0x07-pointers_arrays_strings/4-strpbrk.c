#include "main.h"

#include<string.h>

/**
 * *_strpbrk - returns first occurrence of a matching character
 * @s: string to be scanned
 * @accept: string to be matched
 *
 * Return: matching string @s,NULL otherwise
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j, len1, len2;

	len1 = strlen(s);

	len2 = strlen(accept);

	for (i = 0; i <= len1; i++)
	{
		for (j = 0; j <= len2; j++)
		{
			if (*(s + i) == *(accept + j) && (*accept + j) != '\0')
			{
				return (*(s + i));
			}
		}
	}
	return ('\0');
}
