#include <stdlib.h>
#include <string.h>
/**
 * *_realloc - function relocating memory using block.
 * @ptr: pointer.
 * @old_size: value of the old.
 * @new_size: value of the new.
 * Return: new_ptr.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	char *add_ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	new_ptr = malloc(new_size);
	if (!new_ptr)
		return (NULL);

	add_ptr = ptr;

	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			new_ptr[i] = add_ptr[i];
	}

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			new_ptr[i] = add_ptr[i];
	}

	free(ptr);
	return (new_ptr);
}
