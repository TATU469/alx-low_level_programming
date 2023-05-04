#include <stdio.h>

/**
 * clear_bit -Function that sets the value of a bit.
 * @n: pointer to the digit.
 * @index: index of the bit to clear
 *
 * Return: 1  or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n &= ~(1UL << index);
	return (1);
}

