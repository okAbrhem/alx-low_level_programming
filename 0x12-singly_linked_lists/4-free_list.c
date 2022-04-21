#include "lists.h"

/**
 * free_list - frees a node
 * @head: head pointer
 *
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *ptr;

	while (head != NULL)
	{
		ptr = head->next;
		free(head->str);
		free(head);
		head = ptr;
	}
}
