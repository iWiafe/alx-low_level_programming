#include "lists.h"

/**
 * sum_listint - a function that returns the sum of all the
 * data (n) of a listint_t linked list
 * @head: head of the list
 * Return: sum of data or 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	size_t sumofall = 0;
	listint_t *newnode = head

	while (newnode != NULL)
	{
		sumofall += newnode->n;
		newnode = newnode->next;
	}
	return (sumofall);
}
