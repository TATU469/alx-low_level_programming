#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * malloc_checked - allocates memmory using malloc
 * @b:number of bytes to allocate
 * Return:returns a pointer
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		printf("Error: malloc failed to allocate memmory\n");
		exit(98);
	}
	return (ptr);
}
