#include <stdio.h>
/**
 * get_bit - function that value of a bit.
 * @n: The integer
 * @index:where index starting from zero.
 * Return: index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	return ((n >> index) & 1);
}

