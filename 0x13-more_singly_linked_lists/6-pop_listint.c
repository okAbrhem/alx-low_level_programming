#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * pop_listint - deletes head node of a list
 * @head: head pointer
 * Return: head's node data, 0 if node is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *node_remover1, *node_remover2;
	int n;

	if (*head == NULL)
	{
		return (0);
	}

	node_remover1 = *head;
	node_remover2 = node_remover1->next;
	n = node_remover1->n;
	free(*head);
	*head = node_remover2;
	node_remover1 = NULL;

	return (n);
}
