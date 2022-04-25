#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - add node to the end of a list
 * @head: head pointer
 * @n: integer value
 * Return: address of end_node, NULL otherwise
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr;
	listint_t *end_node = malloc(sizeof(listint_t));

	ptr = *head;

	if (end_node == NULL)
	{
		return (NULL);
	}
	end_node->n = n;

	if (ptr == NULL)
	{
		*head = end_node;
	}
	else
	{
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = end_node;
	}

	return (end_node);
}
