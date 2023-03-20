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
	long long int d;
	float x;

	printf("size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("size of an int: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("size of a long int: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("size of a float: %lu byte(s)\n", (unsigned long)sizeof(x));
	return (0);
}
