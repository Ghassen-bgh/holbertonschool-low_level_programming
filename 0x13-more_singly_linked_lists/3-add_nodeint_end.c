#include "lists.h"

/**
 * create_node - Creates a node
 * @n: Value for the node
 * Return: A pointer to the beginning of the list
 */
listint_t *create_node(const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	return (new_node);
}

/**
 * add_nodeint_end - Adds a node at the end of a list
 * @head: Pointer to the beginning of a list
 * @n: number to add to the node
 * Return: A pointer to the beginning of the list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *t;

	t = *head;
	if (head == NULL)
		return (NULL);

	new_node = create_node(n);
	if (new_node == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	while (t->next != NULL)
		t = t->next;
	t->next = new_node;

	return (*head);
}
