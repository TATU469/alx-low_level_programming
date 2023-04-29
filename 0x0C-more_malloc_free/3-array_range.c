#include <stdlib.h>
/**
 * *array_range - create an integer
 * @min: Min value
 * @max: Max value
 * Return:ar.
 */

int *array_range(int min, int max)
{
	int *ar, i;

	if (min > max)
		return (NULL);
	ar = malloc(sizeof(int) * (max - min + 1));
	if (ar == NULL)
		return (NULL);
	for (i = 0; min <= max; i++, min++)
		ar[i] = min;
	return (ar);
}

