#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints the opcodes of its own main function
 * @argc: number of arguments
 * @argv: array of argument vector
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int a, bytes;
	char *array;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	array = (char *)main;

	for (a = 0; a < bytes; a++)
	{
		if (a == bytes - 1)
		{
			printf("%02hhx\n", array[a]);
			break;
		}
		printf("%02hhx ", array[a]);
	}

	return (0);
}

