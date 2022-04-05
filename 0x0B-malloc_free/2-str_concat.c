#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1: source string
 * @s2: string to be concatenated on source
 *
 * Return: pointer to @s3, NULL if failed
 */

char *str_concat(char *s1, char *s2)
{
	char *s3;
	int i, j, len1, len2;
	char *null = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (s1 == NULL)
	{
		s1 = null;
	}
	if (s2 == NULL)
	{
		s2 = null;
	}

	s3 = malloc(sizeof(char) * (len1 + len2 + 1));

	if (s3 == 0)
	{
		return (0);
	}

	for (i = 0; i < len1; i++)
	{
		*(s3 + i) = *(s1 + i);
	}
	for (i = 0, j = len1; i <= len2; i++, j++)
	{
		*(s3 + j) = *(s2 + i);
	}
	return (s3);

}
