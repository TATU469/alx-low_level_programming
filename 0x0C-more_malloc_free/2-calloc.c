#include <stdlib.h>
#include <string.h>
/**
 * *_calloc - allocate memory
 * @nmemb:The number of element in array.
 * @size:The size of the element.
 * Return:ptr.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	memset(ptr, 0, nmemb * size);
	return (ptr);
}

