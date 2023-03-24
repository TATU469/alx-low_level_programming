#include "main.h"
/**
 *  _isupper - function that checks c
 *
 *  @c: parameter to be checked
 *
 *  Return: 1 or 0
 */

int _isupper(int c)
{

	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
