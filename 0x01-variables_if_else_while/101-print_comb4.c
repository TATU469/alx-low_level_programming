#include <stdio.h>
/**
 * main - entry point
 *
 * Return: success (0)
 */

int main(void)
{
	int i;

	int k;

	int o;

	for (i = 0; i < 10; i++)
	{
		for (k = 1; k < 10; k++)
		{
			for (o = 2; o < 10 o++)
			if (i < k && k < o)
			{
				putchar(i + '0');
				putchar(k + '0');
				putchar(o + '0');
				if (i + k + o != 24)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
