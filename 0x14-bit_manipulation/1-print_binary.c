#include <stdio.h>
/**
 * print_binary - function that prints the binary presentation.
 * @n: The integer.
 * Return - 0
 */

void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int lagging_zero = 1;

	while (mask != 0)
	{
		if ((n & mask) == 0 && lagging_zero == 0)
		{
			printf("0");
		} else if ((n & mask) != 0)
		{
			lagging_zero = 0;
			printf("1");
		}
		else if ((n & mask) == 0 && lagging_zero == 1 && mask == 1)
		{
			printf("0");
		}
		mask >>= 1;
	}
}
