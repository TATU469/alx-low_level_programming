#include "main.h"
/**
 * reverse_array - reverses a string
 * @a:string to be reversed
 * @n:number of character
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int i;
	int k;

	for (i = 0; i < n / 2; i++)
	{
		k = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = k;
	}
}
