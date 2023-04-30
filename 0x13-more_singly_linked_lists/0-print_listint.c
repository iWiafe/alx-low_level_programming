#include "lists.h"

/**
 * print_listint - a function that prints all the elements of a listint_t list
 * @h: head of the list
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t countn = 0;

	while (h)
	{
		printf("%d\n", h->n);
		countn++;
		h = h->next;
	}
	return (countn);
}

