#include "main.h"
#include <stdio.h>

int check_prime(int n, int i);
/**
 * is_prime_number - returns prime numbers
 * @n: parameter to be checked
 * Return: integer number
 */
int is_prime_number(int n)
{
	return (check_prime(n, 1));
}
/**
 * check_prime - check number if is a prime
 * @n:number to be checked
 * @i:iteration times
 * Return: 1 or 0
 */
int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % i == 0 && i > 1)
		return (0);
	if ((n / i) < i)
		return (1);
	return (check_prime(n, i + 1));
}

