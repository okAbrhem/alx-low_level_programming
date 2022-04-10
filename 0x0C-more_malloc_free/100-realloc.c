#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocates memory(increase or decrease size of array)
 * @ptr: pointer to the previously allocated memory
 * @old_size: size of old memory
 * @new_size: size of new memory
 * Return: pointer to the newBlock, NULL if new_size is zero
 *         ptr if new_size is not changed, if ptr is not NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *newBlock, *old_mem;
	unsigned int i;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (!new_size && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
	{
		return (malloc(new_size));
	}
	newBlock = malloc(new_size);
	if (newBlock == NULL)
	{
		return (NULL);
	}
	old_mem = ptr;
	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
		{
			newBlock[i] = ptr[i];
		}
	}
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
		{
			newBlock[i] = ptr[i];
		}
	}
	free(ptr);
	return (newBlock);
}
