#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - Function that adds a new node at the end list.
 * @head: A pointer to  the listint_t list.
 * @n: An integer.
 * Return: added node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *added_node, *lst_node;

	if (!head)
		return (NULL);
	added_node = malloc(sizeof(listint_t));
	if (!added_node)
		return (NULL);
	added_node->n = n;
	added_node->next = NULL;
	if (!*head)
	{
		*head = added_node;
		return (added_node);
	}
	lst_node = *head;
	while (lst_node->next)
		lst_node = lst_node->next;
	lst_node->next = added_node;
	return (added_node);
}

