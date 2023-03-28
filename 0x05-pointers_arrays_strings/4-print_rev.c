#include "main.h"
/**
 * print_rev - prints reverse of a string
 *
 * @s: parameter to be printed
 *
 * Return: 0
 */

void print_rev(char *s)
{
	int i;
	int length = strlen(s);
	int middle = length / 2;
	char temp;

	for (int i = 0; i < middle; i++)
	{
		temp = s[i];
		s[i] = s[length -i -1];

		s[length -i -1] = temp;

		_putchar(s[i]);
		_putchar('\n');
	}
}
