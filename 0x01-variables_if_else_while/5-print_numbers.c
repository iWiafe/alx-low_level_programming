#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that prints all single digit numbers of base 10
 * Return: Always (Success)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	printf("%d", num);
	getchar();
	printf("\n");
	return (0);
}
