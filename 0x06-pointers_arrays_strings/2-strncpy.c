#include "main.h"
/**
 * *_strncpy - copy strings
 * @dest: destination of the string
 * @src: source of string
 * @n:number of string
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
		dest[i] = src[1];
	return (dest);
}
