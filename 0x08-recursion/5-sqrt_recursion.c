#include "main.h"
#include <stdio.h>

int actual_sqrt_recursion(int n, int a);

/**
 * _sqrt_recursion - a function that returns
 * the natural square root of a number
 * @n: number that computes the square root
 * Return: Always (Success)
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (actual_sqrt_recursion(n, 0));
	}
}

/**
 * actual_sqrt_recursion - recurses to find
 * the natural square root of a number
 * @n: number that computes the square root
 * @a: iterator
 * Return: Always (Success)
 */
int actual_sqrt_recursion(int n, int a)
{
	if (a * a > n)
	{
		return (-1);
	}
	if (a * a == n)
	{
		return (a);
	}
	else
	{
		return (actual_sqrt_recursion(n, a + 1));
	}
}

