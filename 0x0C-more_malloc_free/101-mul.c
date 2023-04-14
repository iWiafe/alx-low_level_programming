#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

#define EER_MSG "Error"

/**
 * is_digit - a function which checks if a string contains a non-digit char
 * @s: string to be checked
 * Return: Always (Success)
 */
int is_digit(char *s)
{
	int a = 0;

	while (s[a])
	{
		if (s[a] < '0' || s[a] > '9')
			return (0);
		a++;
	}
	return (1);
}

/**
 * _strlen - A function that returns the length of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	return (a);
}

/**
 * errors - handles errors
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - a program that multiplies two positive numbers.
 * @argc: number of arguments
 * @argv: arguement vector
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int len1, len2, len, a, carry, digit1, digit2, *result, b = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	len = len1 + len2 + 1;
	result = malloc(sizeof(int) * len);
	if (!result)
		return (1);
	for (a = 0; a <= len1 + len2; a++)
		result[a] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		digit1 = s1[len1] - '0';
		carry = 0;
		for (len2 = _strlen(s2) - 1; len2 >= 0; len2--)
			digit2 = s2[len2] - '0';
			carry += result[len1 + len2 + 1] + (digit1 * digit2);
			result[len1 + len2 + 1] = carry % 10;
			carry /= 10;
		if (carry > 0)
			result[len1 + len2 + 1] += carry;
	}
	for (a = 0; a < len - 1; a++)
		if (result[a])
			b = 1;
		if (b)
			_putchar(result[a] + '0');
	if (!b)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
