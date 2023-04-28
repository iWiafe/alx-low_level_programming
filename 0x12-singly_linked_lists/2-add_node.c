#include "lists.h"
#include <stdio.h>

/**
 * add_node - function that adds a new node at the beginning of a list_t list
 * @head: double pointer to list_t
 * @str: new string to be added
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int nod = 0;

	while (str[nod])
		nod++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = nod;
	new->next = (*head);
	(*head) = new;

	return (*head);
}


