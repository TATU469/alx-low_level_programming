#include "main.h"
/**
 * string_toupper - changes string from lower to upper
 * @toupper: parameter to be changed
 * Return: 0
 */

char *string_toupper(char *toupper)
{
	int i;

	for (i = 0; toupper[i] != '\0'; i++)
	{
		if (toupper[i] >= 'a' && toupper[i] <= 'z')
			toupper[i] = toupper[i] - 32;
	}
	return (toupper);
}
