#include "main.h"
#include "string.h"
#include "stdlib.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: string to concatenate
 * @s2: string to be concatenated
 * @n: bytes of string s2 to be concatenated
 *
 * Return: pointer to the concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len1, len2;
	char *p;

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = NULL;
	}

	if (n >= len2)
	{
		n = len2;
	}

	p = malloc(((len1 + n) + 1));

	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		p[i] = s1[i];
	}
	for (j = 0; j != n; j++)
	{
		p[i] = s2[j];
		i++;
	}

	p[i] = '\0';
	return (p);
}
