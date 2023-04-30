#include <stdio.h>
#include "lists.h"

/**
 * print_listint - Structure that prints all the elements of a listint_t list
 * @h: pointer to the head of the list.
 *
 * Return: new.
 */
size_t print_listint(const listint_t *h)
{
	size_t new = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		new++;
	}

	return (new);
}
