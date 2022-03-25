#include "main.h"
/**
 * *_strncat - entry for code block
 * @dest: string to concatenate
 * @src: string to be concatenated
 * @n: checks for maximum character to be concatenated
 * while - to iterate over string
 *
 * Return: pointer string
 */
char *_strncat(char *dest, char *src, int n)
{
int i, j;

i = 0;
while (dest[i] != '\0')
{
	i++;
}

j = 0;
while (j < n && src[j])
{
	dest[i] = src[j];
	i++;
	j++;
}
if (j < n)
{
	dest[i] = src[j];
}
return (dest);
}
