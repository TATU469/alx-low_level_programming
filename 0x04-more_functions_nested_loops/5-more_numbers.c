#include "main.h"
/**
 * more_numbers - prints 10 times
 *
 * Return: Always 0
 */

void more_numbers(void)
{
	int k, j;

	for (k = 1; k <= 10; k++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 10)
				_putchar('1');
			_putchar(j % 10 + '0');
		}
		_putchar('\n');
	}
}
