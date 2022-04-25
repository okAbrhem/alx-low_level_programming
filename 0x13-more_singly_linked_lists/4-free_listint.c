#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees a list
 * @head: head pointer
 *
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}
}
