#include "lists.h"

/**
 * listint_len -  returns the number of elements
 * in a linked list_t list
 * @h: Pointer to the head of the linked list
 * Return: The total amount of nodes in the linked list
 */
size_t listint_len(const listint_t *h)
{
	int i;

	if (h == NULL)
		return (0);
	for (i = 1; h->next != NULL; i++)
		h = h->next;
	return (i);
}
