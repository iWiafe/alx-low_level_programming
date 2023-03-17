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

	puts("Size of a char: 1 byte(s)", sizeof(a));
	puts("Size of an int: 4 byte(s)", sizeof(b));
	puts("Size of a long int: 4 byte(s)", sizeof(c));
	puts("Size of a long long int: 8 byte(s)", sizeof(d));
	puts("Size of a float: 4 byte(s)", sizeof(e));
	Return(0);
}
