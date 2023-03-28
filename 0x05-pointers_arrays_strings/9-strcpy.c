#include "main.h"
/**
 * *_strcpy - copys elemets
 * @dest: to be copied to
 * @src: to be copied from
 * Return: destination
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	return (dest);
}
