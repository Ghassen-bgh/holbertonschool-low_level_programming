#include <stdio.h>
#include "lists.h"
/**
 * print_dlistint - print list
 * Return: number of nodes
 * @x: list
 */
size_t print_dlistint(const dlistint_t *x)
{
	int size = 0;

	while (x)
	{
		printf("%d\n", x->n);
		x = x->next;
		size++;
	}
	return (size);
}
