#include <stdio.h>

void write(void) __attribute__ ((constructor));

/**
 * write - a function that prints a sentence before the main
 * Return: void
 */
void write(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

