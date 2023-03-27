#include "main.h"
/**
 * _strlen - counts string
 *
 * @s: parameter to be checked
 *
 * Return: counts length of the string
 */

int _strlen(char *s)
{
	int i;

	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}
	return (count);
}
