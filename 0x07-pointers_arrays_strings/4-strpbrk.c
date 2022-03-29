#include "main.h"
/**
 * *_strpbrk - finds first occurrence of a matching character
 * @s: string to be scanned
 * @accept: string to be matched
 *
 * Return: matching string
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				return (s[i]);
			}
		}
	}
	return ('\0');
}
