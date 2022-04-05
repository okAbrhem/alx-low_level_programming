#include "main.h"
#include<stdlib.h>


/**
 * create_array - creates an array of chars
 * @size: size of char
 * @c: character to be initialzed
 *
 * Return: pointer to array, NULL otherwise
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	if (size == 0)
	{
		return (0);
	}

	str = malloc(sizeof(char) * size);

	if (str == 0)
	{
		return (0);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			*(str + i) = c;
		}
		*(str + i) = '\0';
		return (str);
	}

}
