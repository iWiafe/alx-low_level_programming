#include <stdlib.h>

/**
 * main - a program that prints the name of the file it was compiled from,
 * followed by a new line
 * Return: 0 (Success)
 */
int main(void)
{
	puts("The name of the file %s", _FILE_);

	return 0;
}
