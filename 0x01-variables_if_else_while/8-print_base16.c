#include<stdio.h>
/**
 * main - prints hexadecimal base with putchar
 * Return: 0
 */

int main(void)
{
	int n = '0';
	int h = 'a';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	while (h <= 'f')
	{
		putchar(h);
		h++;
	}
	putchar('\n');
	return (0);
}
