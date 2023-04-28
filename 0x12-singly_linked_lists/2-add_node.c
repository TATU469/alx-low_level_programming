#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: Pointer to the head of the list.
 * @str: String to be added to the new node.
 *
 * Return: added node.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *added_node;

	if (head == NULL || str == NULL)
		return (NULL);

	added_node = malloc(sizeof(list_t));
	if (added_node == NULL)
		return (NULL);

	added_node->str = strdup(str);
	if (added_node->str == NULL)
	{
		free(added_node);
		return (NULL);
	}

	added_node->len = strlen(str);
	added_node->next = *head;
	*head = added_node;

	return (added_node);
}
