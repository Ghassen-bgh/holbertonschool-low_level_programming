#include"main.h"
/**
 * _memcpy - copy n bytes of memory from source to destination.
 *
 * @dest: destination.
 * @src: source.
 * @n: number of bytes.
 *
 * Return: pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int s = n;

	if (s > 0)
	{
		int i;

		for (i = 0; i < s; i++)
			dest[i] = src[i];
	}
	return (dest);
}
