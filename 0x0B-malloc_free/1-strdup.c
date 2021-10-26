#include"main.h"
#include<stdlib.h>
#include <stdio.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: string to duplicate.
 * Return: pointer to duplicated string.
 */
char *_strdup(char *str)
{
	char *x;
	int i = 0, l = 0;

	if (str == NULL)
		return (NULL);
	while (*(str + i))
	{
		l++;
		i++;
	}
	l++;
	x = malloc(sizeof(char) * l);
	if (x == NULL)
		return (NULL);
	i = 0;
	while (i < l)
	{
		*(x + i) = *(str + i);
		i++;
	}
	return (x);
}
