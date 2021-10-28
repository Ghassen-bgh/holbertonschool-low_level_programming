#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: min value
 * @max: max value
 * Return: pointer to newly created array or NULL
 */
int *array_range(int min, int max)
{
	int *x;
	int p, j, i;

	if (min > max)
		return (NULL);
	 i = ((max - min) + 1);
	x = malloc(i * sizeof(int));
	if (x == NULL)
		return (NULL);
	j = min;
	for (p = 0; p < i; p++, j++)
		x[p] = j;
	return (x);
}
