#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - describes main function
 *
 * Return: returns 0 when the code is correct
 */

int main(void)
{
	int n;

	int l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	l = n % 10;

	if (l > 5)
		printf("The last digit of %d is %d and is greater than 6", n, l);
	else if (l == 0)
		printf("The las digit of %d is %d and is 0", n, l);
	else if (l < 6 && l != 0)
		printf("The last digit of %d is %d and is lesss than 6 and not 0", n, l);
	printf("\n");
	return (0);
}
