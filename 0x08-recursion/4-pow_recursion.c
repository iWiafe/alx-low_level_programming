#include "main.h"

/**
 * _pow_recursion - a function that returns the
 * value of x raised to the power of y
 * @x: the value raising to the power y
 * @y: the exponent of x
 * Return: Always (Success)
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
