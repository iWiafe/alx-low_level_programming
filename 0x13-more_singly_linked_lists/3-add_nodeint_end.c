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
	listint_t *next;
	listint_t *newnode;

	next = head;

	newnode = malloc(sizeof(listint_t));

	newnode->n = n;
	newnode->link = NULL;

	while (next->link != NULL)
	{
		next = next->link;
	}
	next->link = newnode;
}
