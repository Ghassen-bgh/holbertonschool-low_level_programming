#include"main.h"
/**
 * _strlen - return the length of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
		int l = 0;

	while (*s != '\0')
	{
		l++;
		s++;
	}

	return (l);
}
/**
 * puts_half - prints half of a string, followed by a new line
 * @str: string to print
 */
void puts_half(char *str)
{
	int i;
	int l = _strlen(str);

	if (l % 2 != 0)
		i = (l / 2) + 1;
	else
		i = (l / 2);

	while (i < l)
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
