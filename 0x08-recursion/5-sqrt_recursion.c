#include "main.h"

/**
 * _sqrt_recursion - a function that returns
 * the natural square root of a number
 * @n: number
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
		return (natural_sqrt_recursion(n, 0));
	}
}
