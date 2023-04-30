#include "lists.h"

/**
 * listint_len - a function that returns the number of
 * elements in a linked listint_t list
 * @h: head of the list
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *element = h;
	size_t numb = 0;

	while (element != NULL)
	{
		numb += 1;
		element = element->next;
	}
	return (numb);
}
