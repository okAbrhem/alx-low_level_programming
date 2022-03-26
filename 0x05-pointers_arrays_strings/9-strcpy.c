#include "main.h"
#include <string.h>
/**
 * *_strcpy - copy str2 to str1 buffer
 * @dest: buffer string
 * @src: string to be copied
 * for - iterates over condition
 *
 * Return: pointer string
 */
char *_strcpy(char *dest, char *src)
{
int i, len;
len = strlen(dest);

for (i = 0; i < len; i++)
{
	dest[i] = src[i];
}
return (dest);
}
