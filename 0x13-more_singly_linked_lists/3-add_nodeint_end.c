#include "lists.h"

/**
 * add_nodeint_end - a function that adds a new node at the
 * end of a listint_t list
 * @head: double pointer head of the list
 * @n: node data to be added
 * Return: node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode = malloc(sizeof(listint_t));
	listint_t *link = *head;

	if (newnode != NULL)
	{
		newnode->n = n;
		newnode->next = NULL;
	}
	else
	{
		return (NULL);
	}
	if (link != NULL)
	{
		while (link->next != NULL)
		{
			link = link->next;
		}
		link->next = newnode;
	}
	else
	{
		*head = newnode;
	}
	return (newnode);
}
