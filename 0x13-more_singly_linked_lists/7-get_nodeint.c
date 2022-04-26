#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - returns the nth node of a list
 * @head: pointer to the first node
 * @index: index of the node
 * Return: nth node
 *
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;

	unsigned int i;

	temp = head;

	if (temp == NULL)
	{
		return (NULL);
	}
	else if (temp != NULL)
	{
		for (i = 0; i < index && (temp != NULL); i++)
		{
			temp = temp->next;
		}
	}
	return (temp);
}
