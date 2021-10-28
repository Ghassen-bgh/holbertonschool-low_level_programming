#include"main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of elements
 * @size: size of elements in bytes
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *x;
	char *a;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	x = malloc(size * nmemb);
	if (x == NULL)
		return (NULL);
	a = x;
	for (i = 0; i < (size * nmemb); i++)
		a[i] = '\0';
	return (x);
}
