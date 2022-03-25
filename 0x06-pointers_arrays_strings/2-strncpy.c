#include "main.h"
/**
 * *_strncpy - entry for code block to be executed
 * @dest: string to concatenate
 * @src: string to be concatenated
 * while - iterates over string
 * @n: integer to hold n bytes
 *
 * Return: Pointer string
 */
char *_strncpy(char *dest, char *src, int n)
{

int i;
i = 0;
while (i < n && src[i])
{
	dest[i] = src[i];
	i++;
}

while (i < n)
{
dest[i] = '\0';
i++;
}
return (dest);
}
