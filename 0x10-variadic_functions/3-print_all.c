#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - a function that prints anything
 * @format: list of types of arguments passed to the function
 * Return: void
 */
void print_all(const char * const format, ...)
{
	char *str, *com = "";
	va_list list;
	int a = 0;

	va_start(list, format);

	if (format)
	{
		while (format[a])
		{
			switch (format[a])
			{
				case 'c':
					printf("%s%c", com, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", com, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", com, va_arg(list, double));
					break;
				case 's':
					str = va_arg(list, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", com, str);
					break;
				default:
					a++;
					continue;
			}
			com = ", ";
			a++;
		}
	}

	printf("\n");

	va_end(list);
}

