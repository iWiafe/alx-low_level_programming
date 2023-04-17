#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - a function that prints a struct dog
 * @d: struct dog to be printed
 * Return: Always (Success)
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return (NULL);
	}
	if (d->name == NULL)
	{
		d->name = "(nil)";
	}
	if (d->owner == NULL)
	{
		d->owner = "(nil)";
	}
	printf("Name: %s\n Age: %f\n Owner: %s\n", d->name, d->age, d->owner);
}
