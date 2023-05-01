#include "lists.h"

/**
 * sum_listint - a function that returns the sum of all the
 * data (n) of a listint_t linked list
 * @head: head of the list
 * Return: sum of data or 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	int data_n = 0;
	listint_t *newnode = head

	while (newnode != NULL)
	{
		data_n += newnode->n;
		newnode = newnode->next;
	}
	return (data_n);
}
