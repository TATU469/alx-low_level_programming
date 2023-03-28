#include "main.h"
/**
 * rev_string - function that reverse a string
 *
 * @s: parameter to be reversed
 * Return: 0
 */

void rev_string(char *s)
{
	int i;

	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
		count++;
	for (i = count; i >= 0; i--)
		return(s);
}
