#include "lists.h"

/**
 * insert_nodeint_at_index - a function that inserts a new node
 * at a given position.
 * @head: head pointer of the list
 * @idx: index of the list, starting at 0
 * @n: data to insert
 * Return: address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode = malloc(sizeof(listint_t));
	listint_t *current = *head;
	unsigned int a;

	if (!newnode || !head)
	{
		return (NULL);
	}

	newnode->n = n;
	newnode->next = NULL;

	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}

	for (a = 0; current && a < idx; a++)
	{
		if (a == idx - 1)
		{
			newnode->next = current->next;
			current->next = newnode;
			return (newnode);
		}
		else
			current = current->next;
	}

	return (NULL);
}

