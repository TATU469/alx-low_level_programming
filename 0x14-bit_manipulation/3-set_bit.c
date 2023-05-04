#include <stdio.h>
/**
 * set_bit - function that sets value of a bit.
 * @n: the integer
 * @index: index starting from
 * Return:1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int val;

	if (index > 63)
		return (-1);
	val = 1UL << index;
	*n |= val;
	return (1);

}
