#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Add a new node at the end of a list.
 * @head: A pointer to a pointer to the head node of the list
 * @str: The string to be stored in the new node
 *
 * Return: Added node.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *added_node;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;
	added_node = malloc(sizeof(list_t));
	if (!added_node)
		return (NULL);
	added_node->str = strdup(str);
	added_node->len = len;
	added_node->next = NULL;
	if (*head == NULL)
	{
		*head = added_node;
		return (added_node);
	}
	while (temp->next)
		temp = temp->next;
	temp->next = added_node;
	return (added_node);
}
