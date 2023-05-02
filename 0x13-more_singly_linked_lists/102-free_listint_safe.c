#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint_safe - Function frees a  list.
 * @h: A pointer to the head of the list to be freed.
 * Return: count.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *current_1, *next;

	if (h == NULL)
		return (0);
	current_1 = *h;
	while (current_1 != NULL)
	{
		count++;
		next = current_1->next;
		free(current_1);
		if (next >= current_1)
		{
			*h = NULL;
			exit(98);
		}
		current_1 = next;
	}
	*h = NULL;
	return (count);
}

