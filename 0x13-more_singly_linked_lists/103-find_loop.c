#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * find_listint_loop - Function that finds the loop in a  list
 * @head: pointer to the head of the list.
 * Return: The address  or NULL.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *turtle_slow, *hare_fast;

	if (!head)
		return (NULL);
	turtle_slow = head;
	hare_fast = head;
	while (turtle_slow && hare_fast && hare_fast->next)
	{
		turtle_slow = turtle_slow->next;
		hare_fast = hare_fast->next->next;
		if (turtle_slow == hare_fast)
		{
			turtle_slow = head;
			while (turtle_slow && hare_fast)
			{
				if (turtle_slow == hare_fast)
					return (turtle_slow);
				turtle_slow = turtle_slow->next;
				hare_fast = hare_fast->next;
			}
		}
	}
	return (NULL);
}

