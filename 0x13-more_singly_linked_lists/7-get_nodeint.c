#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns the nth node
 * of a listint_t linked list
 * @head: head pointer of the list
 * @index: index of the node, starting at 0
 * Return: nth node or NULL if node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node = head;
	unsigned int m = 0;

	while (node && m < index)
	{
		node = node->next;
		m++;
	}

	return (node ? node : NULL);
}

