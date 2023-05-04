#include <stdio.h>
/**
 * flip_bits - Function that  returns the number of bits.
 * @n: integer
 * @m:  integer
 * Return: add
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int varr = n ^ m;
	unsigned int add = 0;

	while (varr > 0)
	{
		add += varr & 1;
		varr >>= 1;
	}
	return (add);
}
