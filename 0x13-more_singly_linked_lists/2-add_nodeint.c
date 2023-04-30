#include "lists.h"

/**
 * add_nodeint - a function that adds a new node at the
 * beginning of a listint_t list
 * @head: double pointer head of the list
 * @n: node to be added
 * Return: node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode = malloc(sizeof(listint_t));

	if (newnode != NULL)
	{
		newnode->n = n;
		newnode->next = *head;
	}
	else
	{
		return (NULL);
	}
	if (*head != NULL)
	{
		newnode->next = *head;
	}
	*head = newnode;

	return (newnode);
}
