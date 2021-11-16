#include "lists.h"
/**
 * delete_nodeint_at_index - Deletes a node at a designated index
 * @head: Pointer to the beginning of the list
 * @index: Index of the node that should be deleted
 * Return: 1 if susccessful, -1 if it fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *t;
	listint_t *node;

	t = *head;
	if (head == NULL || *head == NULL)
		return (-1);
	for (i = 0; i < index - 1 && t != NULL && index != 0; i++)
		t = t->next;
	if (t == NULL)
		return (-1);
	if (index == 0)
	{
		node = t->next;
		free(t);
		*head = node;
	}
	else
	{
		if (t->next == NULL)
			node = t->next;
		else
			node = t->next->next;
		free(t->next);
		t->next = node;
	}
	return (1);
}
