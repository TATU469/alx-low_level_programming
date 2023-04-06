#include "main.h"
/**
 * factorial - function prints factoriall
 * @n:parameter
 * Return: integer
 */

int factorial(int n)
{
	if (n <= 0)
		return (-1);
	return (n * factorial(n - 1));
}
