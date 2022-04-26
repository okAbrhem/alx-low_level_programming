#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes node at index
 * @head: head pointer
 * @index: index of the node to be deleted
 * Return: 1 if succeed, -1 if it fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *headptr, *ptr;
	unsigned int i;

	headptr = *head;

	if (headptr != NULL && index != 0)
	{
		for (i = 0; i < index && headptr != NULL; i++)
		{
			ptr = headptr;
			headptr = headptr->next;
		}
		if (headptr != NULL)
		{
			ptr->next = headptr->next;
			free(headptr);
			return (1);
		}
		else
		{
			return (-1);
		}
	}
	if (headptr != NULL && index == 0)
	{
		ptr = headptr->next;
		free(headptr);
		*head = ptr;
		return (1);
	}
	else
	{
		return (-1);
	}
}
