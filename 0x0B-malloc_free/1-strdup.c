#include "main.h"
#include<stdlib.h>
#include<string.h>

/**
 * _strdup - returns pointer to the duplicated string
 * @str: string to be duplicated
 *
 * Return: pointer to the duplicated string, NULL otherwise
 */

char *_strdup(char *str)
{
	char *str2;
	int i, len;

	len = strlen(str);

	if (str == NULL)
	{
		return (0);
	}

	str2 = malloc(sizeof(char) * len + 1);

	if (str2 == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i <= len; i++)
		{
			*(str2 + i) = *(str + i);
		}
		return (str2);
	}
}
