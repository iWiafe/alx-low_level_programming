#include "lists.h"

/**
 * pop_listint - a function that deletes the head node of a
 * listint_t linked list, and returns the head node’s data (n).
 * @head: double head pointer of the list
 * Return: node data deleted or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *node;
	int hndata;

	if (!head || !*head)
	{
		return (0);
	}
	hndata = (*head)->n;
	node = (*head)->next;
	free(*head);
	*head = node;
	return (hndata);
}
