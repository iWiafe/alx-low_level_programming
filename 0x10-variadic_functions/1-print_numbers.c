#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - a function that prints numbers, followed by a new line
 * @n: number of integers passed to the function
 * @...: variable number of paramters to print the numbers
 * @separator: string to be printed between numbers
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numb;
	int i;

	va_start(numb, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(numb, int));

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(numb);
	_putchar('\n');
}
