#include"main.h"
/**
 * _memset - Fills the first n bytes of the memory area
 * pointed to by s with the constant byte b.
 *
 * @s: pointer to memory area.
 * @b: The character to fill the memory area with.
 * @n: The number of bytes to be filled.
 *
 * Return: a pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
