#include "main.h"
/**
 * leet - leet encoding
 * @str:string to be encoded
 * Return: 0
 */

char *leet(char *str)
{
	int i;
	int k;

	char *a = "aAeEoOtTlL";
	char *b = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (k = 0; a[k] != '\0'; k++)
		{
			if (str[i] == a[k])
				str[i] = b[k];
		}
	}
	return (str);
}
