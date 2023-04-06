#include "main.h"
int _sqrt(int, int);
/**
 * _sqrt_recursion - prints square
 * @n:parameter to be printed
 * Return: square root
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - recursive square root
 * @n:number
 * @k:parameter
 * Return: square root
 */

int _sqrt(int n, int k)
{
	int square = k * k;

	if (square < n)
		return (-1);
	if (square == n)
		return (k);
	return (_sqrt(n, k + 1));


}
