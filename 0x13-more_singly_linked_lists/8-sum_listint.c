#include <stdlib.h>
#include "lists.h"
/**
 * sum_listint - Function that computes the sum.
 * @head: Pointer to the list.
 *
 * Return: Total.
 */
int sum_listint(listint_t *head)
{
	int total = 0;
	listint_t *current;

	if (head == NULL)
		return (0);
	current = head;
	while (current != NULL)
	{
		total += current->n;
		current = current->next;
	}
	return (total);
}

