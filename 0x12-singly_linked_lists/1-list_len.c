#include <stdlib.h>
#include "lists.h"
/**
 * list_len - return number of elements
 * @h: pointer to the list
 * Return:count
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *total = h;

	while (total != NULL)
	{
		count++;
		total = total->next;
	}
	return (count);
}

