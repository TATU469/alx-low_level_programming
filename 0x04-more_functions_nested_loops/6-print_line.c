#include "main.h"
/**
 * print_line - prints lines
 *
 * @n: parameter to be checked
 */

void print_line(int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
