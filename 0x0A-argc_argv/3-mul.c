#include <stdio.h>
#include "main.h"
/**
 * main - prints program that multiply two numbers
 * @argc:number of arguments
 * @argv:array of string
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;
	printf("%d/n", result);

	return (0);
}
