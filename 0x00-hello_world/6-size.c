#include <stdio.h>
/**
 * main - describes the function
 *
 * Return: returns if the code is correct
 */

int main(void)
{
	char a;

	int b;

	long int c;

	long long int d;

	float x;

	printf("size of char: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("size of int: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("size of long int: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("size of long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("size of float: %lu byte(s)\n", (unsigned long)sizeof(x));
	return (0);
}
