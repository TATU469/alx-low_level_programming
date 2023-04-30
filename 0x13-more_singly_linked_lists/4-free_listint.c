#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint - Frees a list
 * @head: pointer to head node of list
 * Return: void.
 */
void free_listint(listint_t *head)
{
	listint_t *current;

	while (head)
	{
		current = head;
		head = head->next;
		free(current);
	}
}

