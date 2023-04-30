#include "lists.h"
#include <stdio.h>

/**
 * listint_len - Function that returns the a linked listint_t list
 * @h: pointer to the head of the list
 *
 * Return: List.
 */
size_t listint_len(const listint_t *h)
{
	size_t list = 0;

	while (h != NULL)
	{
		list++;
		h = h->next;
	}

	return (list);
}

