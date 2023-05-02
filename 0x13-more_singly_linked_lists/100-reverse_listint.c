#include "lists.h"
#include "lists.h"
#include <stdlib.h>

/**
 * reverse_listint - Function that reverses a listint_t linked list
 * @head: Pointer to
 * Return: head
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous = NULL, *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = next;
	}
	*head = previous;
	return (*head);
}

