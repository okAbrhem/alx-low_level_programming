#include "lists.h"
/**
 * add_node_end - addes node to the end of a list
 * @head: head pointer
 * @str: malloc'ed string
 *
 * Return: pointer to the new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *end_node, *temp;

	end_node = malloc(sizeof(list_t));

	if (end_node == NULL)
	{
		return (NULL);
	}

	end_node->str = strdup(str);
	end_node->len = strlen(str);
	end_node->next = NULL;

	temp = *head;

		if (temp == NULL)
		{
			*head = end_node;
		}
		else
		{
			while (temp->next)
			{
				temp = temp->next;
			}
			temp->next = end_node;
		}
	return (end_node);
}

