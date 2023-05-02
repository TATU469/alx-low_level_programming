#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint_safe - Function that prints a linked list.
 * @head: A pointer to the  linked list to print.
 * Return: count.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current_1, *current_2;
	size_t count = 0;

	if (head == NULL)
		exit(98);
	current_1 = head;
	while (current_1 != NULL)
	{
		printf("[%p] %d\n", (void *)current_1, current_1->n);
		count++;
		current_2 = head;
		while (current_2 != current_1)
		{
			if (current_1->next == current_2)
			{
				printf("-> [%p] %d\n", (void *)current_2, current_2->n);
				return (count);
			}
			current_2 = current_2->next;
		}
		current_1 = current_1->next;
	}
	return (count);
}

