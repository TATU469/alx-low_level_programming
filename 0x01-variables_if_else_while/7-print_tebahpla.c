#include <stdio.h>
/**
 * main - describes function
 *
 * Return: returns 0 when the code is correct
 */

int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
