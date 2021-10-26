#include"main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of array to be created
 * @c: char to fill the array with
 *
 * Return: pointer to the beginning of the array
 */

char *create_array(unsigned int size, char c)
{
	char *x;
	unsigned int i;

	if (size <= 0)
		return (NULL);
	x = malloc(sizeof(char) * size);

	if (x == NULL)
		return (NULL);

	i = 0;
	while (i < size)
	{
		*(x + i) = c;
		i++;
	}
*(x + i) = '\0';
return (x);
}
