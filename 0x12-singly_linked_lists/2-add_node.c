#include "lists.h"
#include <string.h>

/**
 * add_node - adds new node to the beginning of a line
 * @head: head pointer
 * @str: malloc'ed string
 *
 * Return: address on the new node
 */

list_t *add_node(list_t **head, const char *str)
{

	list_t *new_node;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
