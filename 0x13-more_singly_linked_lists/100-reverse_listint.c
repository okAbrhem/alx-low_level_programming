#include "lists.h"
#include <stdlib.h>

/**
 * reverse_listint - reverses a singly linked list
 * @head: pointer to the first node of a list
 * Return: pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *nex;

	if (*head != NULL && (*head)->next != NULL)
	{
		prev = *head;
		nex = (*head)->next;
		(*head)->next = NULL;
		*head = nex;

		while ((*head)->next != NULL)
		{
			nex = (*head)->next;
			(*head)->next = prev;
			prev = *head;
			*head = nex;
	}
	(*head)->next = prev;
	}
	return (*head);
}

