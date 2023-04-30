#include "lists.h"

/**
 * free_listint2 - a function that frees a listint_t list
 * sets the head to NULL
 * @head: double head pointer of the list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *node;

	if (head == NULL)
	{
		return;
	}

	while (*head)
	{
		node = (*head)->next;
		free(*head);
		*head = node;
	}
	*head = NULL;
}
