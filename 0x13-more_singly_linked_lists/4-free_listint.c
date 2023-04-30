#include "lists.h"

/**
 * free_listint - a function that frees a listint_t list.
 * @head: double head pointer of the list
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *node;

	while (head != NULL)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
