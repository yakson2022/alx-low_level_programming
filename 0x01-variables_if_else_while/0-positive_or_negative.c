#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print if number is positive, zero or negative
 * Return: 0 (success)
 */

/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}

	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}

	while (n < 0)
	{
		printf("%d is negative\n", n);
	}

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	return (0);
}
