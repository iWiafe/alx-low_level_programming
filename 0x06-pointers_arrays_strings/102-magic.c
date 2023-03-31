#include <stdio.h>

/**
 * main - the program prints a[2] = 98
 * followed by a new line
 * Return: 0 Always
 */
int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 98;
	p = &n;
	{
		printf("a[2] = %d\n", a[2]);
	}
	return (0);
}
