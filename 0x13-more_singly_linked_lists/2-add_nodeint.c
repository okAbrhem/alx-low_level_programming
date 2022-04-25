#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds node to the beginning of a list
 * @head: head pointer
 * @n: integer value of a list
 * Return: address of the new node, NULL otherwise
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node != NULL)
	{
		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		return (NULL);
	}
	return (*head);
}
