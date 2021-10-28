#include "main.h"
#include <stdlib.h>
/**
 * *string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: unsigned int
 *
 * Return: the string concatenated
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *x;
	unsigned int i = 0, j = 0, k = 0, a, b;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (!s1[i] == '\0')
		i++;
	while (!s2[j] == '\0')
		j++;
	if (n >= j)
	{
		a = i + j + 1;
		n = j;
		x = malloc(sizeof(char) * a);
	}
	else
	{
		a = i + n + 1;
		x = malloc(sizeof(char) * a);
	}
	if (x == NULL)
	return (NULL);
	for (b = 0; b < i; b++)
		x[b] = s1[b];
	k = b;
		for (b = 0; b < n; b++)
	{
		x[k] = s2[b];
		k++;
	}
	x[k] = '\0';
	return (x);
}
