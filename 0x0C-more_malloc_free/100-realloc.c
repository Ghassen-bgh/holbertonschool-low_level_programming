#include <stdlib.h>
#include "main.h"
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: a pointer to the memory
 * previously allocated with a call to malloc: malloc(old_size)
 * @old_size: the size, in bytes, of the allocated space for ptr
 * @new_size: the new size, in bytes of the new memory block
 *
 * Return: pointer to reallocated memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *x;
	unsigned int i = 0;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		x = malloc(new_size);
		if (x == NULL)
			return (NULL);
		else
			return (x);
	}
	x = malloc(new_size);
	if (x == NULL)
		return (NULL);
	while (i < old_size && i < new_size)
	{
		*((char *)x + i) = *((char *)ptr + i);
		i++;
	}
	free(ptr);
	return (x);
}
