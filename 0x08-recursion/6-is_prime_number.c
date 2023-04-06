#include "main.h"
#include <stdio.h>

int actual_prime(int n, int a);

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
 * actual_prime - computes if a number is prime recursively
 * @n: number to evaluate
 * @a: iterator
 * Return: Always (Success)
 */
int actual_prime(int n, int a)
{
	if (a == 1)
	{
		return (1);
	}
	if (n % a == 0 && a > 0)
	{
		return (0);
	}
	else
	{
		return (actual_prime(n, a - 1));
	}
}
