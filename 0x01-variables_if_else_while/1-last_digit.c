#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - This program will assign a random number to a variable n whenever  executed
 * Return: 0 (success)
 */

int main(void)
{
	int n;
	int x;
	(x = lastd);
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastd = 10;

	if (x > 5)
	{
	printf("%d lastd is greater than5\n", n, lastd);
	}
	else if (x == 0)
	{
	printf("%d and is 0\n", n, lastd);
	}
	else if (x < 6, > 0)
	{
	printf("%d and is less than 6 and greater than 0\n", n, lastd);
	}
	return (0);
}
