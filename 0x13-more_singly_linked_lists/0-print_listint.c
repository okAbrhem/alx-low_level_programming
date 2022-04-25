#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * print_listint - prints elemnts of a singly linked list
 * @h: node
 * Return: number of nodes in a list
 */
size_t print_listint(const listint_t *h)
{
	size_t i;

	i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
