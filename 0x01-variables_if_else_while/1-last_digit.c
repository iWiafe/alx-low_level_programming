#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - This program will assign a random number to variable
 * Return: Always (Success)
 */
int main(void)
{
	int n, lastd;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastd = n % 10
	if (lastd n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastd);
	}
	if (lastd n == 0)
	{
		printf("Last digit of %d is %d and is equal to 0\n", n, lastd);
	}
	if (lastd n < 6 && lastd != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastd);
	}

	return (0);
}
