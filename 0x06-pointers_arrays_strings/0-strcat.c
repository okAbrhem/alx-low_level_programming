#include "main.h"
#include<string.h>
/**
 * *_strcat - concatenates to strings
 * @dest: variable to concatenate
 * @src: character to be concatenated
 * i,len - variable to hold integers
 * for - iterates over charater
 *
 * Return: pointer string
 */
char *_strcat(char *dest, char *src)
{
int i, j;

i = 0;
while (dest[i] != '\0')
{
	i++;
}

j = 0;
while (src[j] != '\0')
{
	dest[i] = src[j];
	j++;
	i++;
}
dest[i] = '\0';
return (dest);
}


