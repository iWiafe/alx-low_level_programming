#include <stdio.h>

/**
 * main - Programme that prints size of various types
 * Return: 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	puts("Size of a char: %lu byte(s)", (unsigned long)sizeof(a));
	puts("Size of an int: %lu byte(s)", (unsigned long)sizeof(b));
	puts("Size of a long int: %lu byte(s)", (unsigned long)sizeof(c));
	puts("Size of a long long int: %lu byte(s)", (unsigned long)sizeof(d));
	puts("Size of a float: %lu byt(s)", (unsigned long)sizeof(e));
	Return(0);
}
