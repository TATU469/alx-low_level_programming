#include "main.h"
/**
 * _abs - checks out absolute values
 *
 * @i: prints out absolute value
 *
 * Return: absolute value
 */

int _abs(int i)
{

	if (i < 0)
		i = -1 * i;
	else if (i >= 0)
		i = i;
	return (i);
}
