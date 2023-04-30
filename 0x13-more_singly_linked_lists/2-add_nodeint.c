#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - Funcction that adds a new node at  a listint_t list
 * @head:A pointer  to first node.
 * @n:An integer.
 *
 * Return: added node.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *added_node;

	added_node = malloc(sizeof(listint_t));
	if (added_node == NULL)
		return (NULL);
	added_node->n = n;
	added_node->next = *head;
	*head = added_node;
	return (added_node);
}
