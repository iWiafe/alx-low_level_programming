#include "lists.h"
#include <stdio.h>

/**
 * list_len - a function that returns the number of elements
 * in a linked list_t list
 * @h: pointer to the list_t list to print
 * Return: the number of elements
 */
size_t list_len(const list_t *h)
{
	size_t a = 0;

	while (h)
	{
		a++;
		h = h->next;
	}

	return (a);
}
