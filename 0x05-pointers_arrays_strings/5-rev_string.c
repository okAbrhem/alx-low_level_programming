#include "main.h"
/**
 * rev_string - entry for main code block
 * @s: string to be checked
 * i, len - integers to store values of string length
 * for - lop to iterate over string s
 * if - used to check for empty space
 * _putchar - used to print charatcers
 *
 */

void rev_string(char *s)
{
	int length, j, i;

	char v1, v2;

	for (length = 0; s[length] != '\0'; length++)
	{

	}

	j = length - 1;
	i = 0;

	while (j > i)
	{
		v1 = s[i];
		v2 = s[j];
		s[i] = v2;
		s[j] = v1;

		j--;

		i++;
	}

}
