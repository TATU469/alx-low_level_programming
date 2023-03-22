#include "main.h"
/**
 * print_last_digit - prints last digit
 *
 * @i: print last digit
 *
 * Return: returns last digit
 */

int print_last_digit(int i)
{
	int n;

	n = i % 10;

	if (i < 0)
	{
		n = -1 * n;
	}
	_putchar(n + '0');
	return (n);

}
