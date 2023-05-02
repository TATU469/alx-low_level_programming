#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - Function that deletes the node at index list.
 * @head: pointer to pointer.
 * @index: index of the node that should be deleted.
 * Return: 1 if it succeeded, then -1 if it fails.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current_1, *current_2;
	unsigned int i;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		current_2 = *head;
		*head = (*head)->next;
		free(current_2);
		return (1);
	}
	current_1 = *head;
	for (i = 0; current_1 != NULL && i < index - 1; i++)
		current_1 = current_1->next;
	if (current_1 == NULL || current_1->next == NULL)
		return (-1);
	current_2 = current_1->next;
	current_1->next = current_2->next;
	free(current_2);
	return (1);
}

