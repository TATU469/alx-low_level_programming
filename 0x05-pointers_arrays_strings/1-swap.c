#include "main.h"
/**
 * swap_int - swaps a and b values
 *
 * @a: value 1 to be swapt
 * @b: value 2 to be swapt
 *
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
