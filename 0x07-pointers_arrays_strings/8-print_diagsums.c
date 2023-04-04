#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - a function that prints the sum
 * of the two diagonals of a square matrix of integers
 * @a: array of the matrix
 * @size: size of the matrix
 * Return: void (Success)
 */
void print_diagsums(int *a, int size)
{
	int b;
	int sum1 = 0;
	int sum2 = 0;

	for (b = 0; b < size; b++)
	{
		sum1 = sum1 + a[b * size + b];
	}
	for (b = size - 1; b >= 0; b--)
	{
		sum2 += a[b * size + (size - b - 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}
