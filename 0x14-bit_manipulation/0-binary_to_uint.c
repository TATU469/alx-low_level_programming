#include <stdio.h>

/**
 * binary_to_uint - Function that  converts a binary number to an unsigned int.
 * @b: A pointer to a string.
 * Return: new_res
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int new_res = 0;

	if (b == NULL)
		return (0);
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		new_res <<= 1;
		new_res += (*b - '0');
		b++;
	}
	return (new_res);
}
