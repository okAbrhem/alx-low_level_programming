#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - returns sum of all the data
 * @head: pointer to the first node
 * Return: sum of all data
 */
int sum_listint(listint_t *head)
{
	unsigned int sum = 0;

	listint_t *new_head;

	new_head = head;

	if (new_head == NULL)
	{
		return (0);
	}
	if (new_head != NULL)
	{
		while (new_head->next != NULL)
		{
			sum += new_head->n;
			new_head = new_head->next;
		}
		sum += new_head->n;
	}
	return (sum);
}
