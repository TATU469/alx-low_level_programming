#include "main.h"
/**
 * _isalpha - function that checks alphabet
 *
 * @c: prints out alpha
 *
 * Return: returns 1 if alphabet otherwise 0
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
