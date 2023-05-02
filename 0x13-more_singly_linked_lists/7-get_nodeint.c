#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of  linked list.
 * @head: pointer to the list
 * @index: index of the node to be returned.
 *
 * Return: current.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *current = head;

	for (i = 0; i < index && current; i++)
	{
		current = current->next;
	}
	return (current);
}
