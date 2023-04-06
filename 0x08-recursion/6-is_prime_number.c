#include "main.h"
#include <stdio.h>

int actual_prime(int n, int i);

/**
 * is_prime_number - indicates an integer is a prime number or not
 * @n: number to check
 * Return: Always (Success)
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (actual_prime(n, n - 1));
	}
}

/**
 * natural_prime - computes if a number is prime recursively
 * @n: number to evaluate
 * @i: iterator
 * Return: Always (Success)
 */
int natural_prime(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0 && i > 0)
	{
		return (0);
	}
	else
	{
		return (natural_prime(n, i - 1));
	}
}
