#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * listint_len - retuens number of elments in a list
 * @h: head pointer
 * Return: i
 */
size_t listint_len(const listint_t *h)
{
	size_t i;

	i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
