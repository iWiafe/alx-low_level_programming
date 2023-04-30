#include "lists.h"

/**
 * print_listint - a function that prints all the elements of a listint_t list
 * @h: head of the list
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *element = h;
	size_t numb = 0;

	while (element != NULL)
	{
		printf("%d\n", element->n);
		numb += 1;
		element = element->next;
	}
	return (numb);
}
