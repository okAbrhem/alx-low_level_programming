#include "lists.h"

/**
 * list_len - returns number of elements of a list
 * @h: pointer to a list
 *
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t i;
	int j = 0;

	for (i = 0; h != NULL; i++)
	{
		if (h->str == NULL)
		{
			return (1);
		}
		else
		{
			j++;
		}
		h = h->next;
	}
	return (j);
}
