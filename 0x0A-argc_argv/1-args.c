#include <stdio.h>
#include "main.h"
/**
 * main -  print the number of arguments passed to the program
 * @argc:number of argument
 * @argv:array of string
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
