#include "main.h"
/**
 * *_strncpy - concatinates two strings
 * @dest: destination of the string
 * @src: source of the string
 * @n: where the string will stop
 * Return: concatinated string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int destlen = 0;
	int srclen = 0;

	for (i = 0; dest[i] != 0; i++)
		destlen++;
	for (i = 0; src[i] != 0; i++)
		srclen++;
	for (i = 0; i < n; i++)
		dest[destlen + i] = src[i];
	return (dest);
}
