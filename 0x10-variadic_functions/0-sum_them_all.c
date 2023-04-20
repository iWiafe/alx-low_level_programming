#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - a function that returns the sum of all its parameters
 * @n: number of paramters passed to the function.
 * @...: variable number of paramters to calculate the sum of.
 * Return: 0 if n == 0 else the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list par;
	unsigned int a;
	unsigned int sum = 0;

	va_start(par, n);
	for (a = 0; a < n; a++)
	{
		sum += va_arg(par, int);
	}
	va_end(par);

	return (sum);
}
