#include "lists.h"
#include <stdio.h>

/**
 * add_node_end - a function that adds a new node at the end of a list_t list.
 * @head: double pointer to list_t
 * @str: new string to be added
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp = *head;
	unsigned int nod = 0;

	while (str[nod])
		nod++;

	new = malloc(sizeof(list_t));
	if (!new)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->len = nod;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (temp->next)
		temp = temp->next;

	temp->next = new;
	return (new);
}

