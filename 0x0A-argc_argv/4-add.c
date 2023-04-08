#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - a program that adds positive numbers
 * @argc: number of arguement
 * @argv: arguement vector
 * Return: Always (Success)
 */
int main(int argc, char *argv[])
{
	char *c;
	int a;
	unsigned int b;
	unsigned int sum = 0;

	if (argc > 1)
	{
		for (a = 1; a < argc; a++)
		{
			c = argv[a];

			for (b = 0; b < strlen(c); b++)
			{
				if (c[b] < 48 || c[b] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}

			sum = sum + atoi(c);
			c++;
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");

	}

	return (0);
}
