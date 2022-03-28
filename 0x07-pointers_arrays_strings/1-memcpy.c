#include "main.h"
/**
 * *_memcpy - copies n byte of data from src to dest
 * @dest: memory area to be copy
 * @src: memory area to be copied
 * @n: number of bytes to be copied
 *
 * Return: memory area at dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;


	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
return (dest);
}
