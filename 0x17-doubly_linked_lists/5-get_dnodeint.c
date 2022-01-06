#include <stdio.h>
#include "lists.h"
/**
 * get_dnodeint_at_index - get nth node in a dll
 * Return: point to nth node
 * @head: head node
 * @index: nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *current = head;

	while (current)
	{
		if (i == index)
			return (current);
		i++;
		current = current->next;
	}
	return (0);
}
