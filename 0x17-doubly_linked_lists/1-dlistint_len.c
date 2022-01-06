#include <stdio.h>
#include "lists.h"
/**
 * dlistint_len - get len of dll
 * Return: len
 * @x: list
 */
size_t dlistint_len(const dlistint_t *x)
{
	int size = 0;

	while (x)
	{
		x = x->next;
		size++;
	}
	return (size);
}
