#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts node at a given point
 * @head: head pointer
 * @idx: index of the list where the node should be added
 * @n: value to be added
 * Return: address of the added node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int  i;

	listint_t *new = malloc(sizeof(listint_t));
	listint_t *head_ptr;

	head_ptr = *head;

	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	if (idx == 0)
	{
		new->next = head_ptr;
		*head = new;
		return (new);
	}

	for (i = 0; (i < idx - 1); i++)
	{
		if (head_ptr == NULL)
		{
			free(new);
			return (NULL);
		}
		head_ptr = head_ptr->next;
	}
	new->next = head_ptr->next;
	head_ptr->next = new;
	return (new);
}
