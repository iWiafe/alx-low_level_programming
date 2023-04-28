#include "lists.h"
#include <stdio.h>

/**
 * free_list - a function that frees a list_t list
 * @head: pointer to list_t
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *loose;

	while (head)
	{
		loose = head->next;
		free(head->str);
		free(head);
		head = loose;
	}
}
