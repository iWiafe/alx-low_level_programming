#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - A program that assigns random variables
 * Return: Always (Success)
 */
int main(void)
{
	int n
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastd = n % 10;
	if (lastd > 5)
	{
		puts("Last digit of %d is %d and is greater than 5", lastd, n);
	}
	else if (lastd == 0)
	{
		puts("Last digit of %d is %d and is equal to 0", lastd, n);
	}
	else if (lastd < 6 && != 0)
	{
		puts("Last digit of %d is %d and is less than 6 and not 0", lastd, n);
	}
	return (0);
}
