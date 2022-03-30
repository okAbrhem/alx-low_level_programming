#include "main.h"
#include <string.h>

/**
 * _strstr - finds first occurrence of a substring
 * @haystack: string to be scanned
 * @needle: string to be checked and returned
 *
 * Return: first occurrence of a string, nothing if not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, len1, len2;

	len1 = strlen(needle);

	len2 = strlen(haystack);

	for (i = 0; i <= len1; i++)
	{
		for (j = 0; j <= len2; j++)
		{
			if ((*(needle + i) == *(haystack + j)) && *(needle + j) !='\0')
			{
				return (*(needle + i));
			}
		}
	}
}
