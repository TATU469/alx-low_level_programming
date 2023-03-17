#include <stdio.h>
/**
 * main - describes the function
 *
 * Return: returns if the code is correct
 */

int main(void)
{
	printf("Size of a char: %lu byte(s)", sizeof(char));
        printf("Size of an int:); %lu byte(s)", sizeof(int));
	printf("Size of a long int: %lu byte(s)", sizeof(long int));
	printf("Size of a long long int: %lu byte(s)", sizeof(long long int));
	printf("Size of a float: %lu byte(s)", sizeof(float));
	return (0);
}
