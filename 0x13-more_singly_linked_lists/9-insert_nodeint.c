#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index -Function that  inserts a new node.
 * @head: pointer to the head.
 * @idx: index of the list where the new node should be added.
 * @n: integer to be added to the new node.
 *
 * Return:added node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *added_node, *current_node;
	unsigned int i = 0;

	added_node = malloc(sizeof(listint_t));
	if (added_node == NULL)
		return (NULL);
	added_node->n = n;
	if (idx == 0)
	{
		added_node->next = *head;
		*head = added_node;
		return (added_node);
	}
	current_node = *head;
	while (current_node != NULL && i < idx - 1)
	{
		current_node = current_node->next;
		i++;
	}
	if (current_node == NULL)
	{
		free(added_node);
		return (NULL);
	}
	added_node->next = current_node->next;
	current_node->next = added_node;
	return (added_node);
}

