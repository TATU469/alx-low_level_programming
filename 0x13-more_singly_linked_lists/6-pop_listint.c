#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * pop_listint -Function that deletes the head node of a listin.
 * @head: pointer  to the head node.
 * Return: data.
 */
int pop_listint(listint_t **head)
{
	listint_t *current;
	int dat;

	if (*head == NULL)
		return (0);
	current = *head;
	*head = (*head)->next;
	dat = current->n;
	free(current);
	return (dat);
}
