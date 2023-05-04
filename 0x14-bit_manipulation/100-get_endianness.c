#include <stdio.h>
/**
 * get_endianness - Function that  checks the endness
 * Return: int
 */
int get_endianness(void)
{
	unsigned int y = 1;
	char *d = (char *)&y;

	return ((int)*d);
}

