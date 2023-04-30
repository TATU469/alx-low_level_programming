#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_listint2 - Frees a listint_t list
 * @head: Double pointer.
 * Return:void
 */
void free_listint2(listint_t **head)
{
	listint_t *update;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		update = (*head)->next;
		free(*head);
		*head = update;
	}
	*head = NULL;
}

