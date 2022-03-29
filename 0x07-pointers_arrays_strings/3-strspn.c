#include "main.h"

#include<string.h>

/**
 * _strspn - gets length of a prefix string
 * @s - string to be scanned
 * @accept - string to be matched
 *
 * Return: len
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, len1, len2, len;

	len1 = strlen(s);

	len2 = strlen(accept);

	len = 0;

	for (i = 0; i <= len1; i++)
	{

		for (j = 0; j <= len2; j++)
		{
			if (*(accept + j) == *(s + j) && *(accept + j) != '\0')
			{
				len++;
			}
			else
			{
				len = 0;
			}
		}
	}

	return (len);
}
