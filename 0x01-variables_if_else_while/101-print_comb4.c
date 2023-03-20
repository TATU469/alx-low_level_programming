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

	int m;

	for (i = 0; i < 10; i++)
	{
		for (k = 1; k < 10; k++)
		{
			for (m = 2; m < 10; m++)
			{
				if (i < k && k < m)
				{
					putchar(i + '0');
					putchar(k + '0');
					putchar(m + '0');
					if (i + k + m != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
