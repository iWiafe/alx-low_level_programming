#include "lists.h"

/**
 * delete_nodeint_at_index - a function that deletes the node
 * at index index of a listint_t linked list.
 * @head: head pointer of the list
 * @index: index of the to be deleted, starting at 0
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *begin = *head;
	listint_t *end = NULL;
	unsigned int a = 0;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = (*head)->next;
		free(begin);
		return (1);
	}

	while (a < index - 1)
	{
		if (!begin || !(begin->next))
		{
			return (-1);
		}
		begin = begin->next;
		a++;
	}

	end = begin->next;
	begin->next = end->next;
	free(end);
	return (1);
}

