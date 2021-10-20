#include"main.h"
/**
 * _strlen_recursion - returns the length of a string
 *
 * @s: points to a string
 *
 * Return: length of a string
 */
int _strlen_recursion(char *s)
{
	int i;

	i = 0;
	if (*s)
	{
		s++;
		i++;
		i = i + _strlen_recursion(s);
	}
	return (i);
}
