#include "main.h"
/**
 * print_square - prints square size
 *
 * @size: size of the square
 *
 * Return: void
 */

void print_square(int size)
{
	int k, n;

	if (size <= 0)
		_putchar('\n');
	for (k = 0; k < size; k++)
	{
		for (n = 0; n < (size); n++)
		{
			_putchar('#');

		}
		_putchar('\n');
	}
}
