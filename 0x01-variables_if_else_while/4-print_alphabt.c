#include <stdio.h>
/**
 * main - describes function
 *
 * Return: returns 0 when the code is correct
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		if (i != 'q' && i != 'e')
			putchar(i);
	putchar('\n');
	return (0);
}
