#include<stdio.h>
/**
 * main - print 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
 * Return: 0
 */

int main(void)
{
	int n = '0';

	while (n <= '9')
	{
		putchar(n);
		if (n != '9')
		{
		putchar(',');
		putchar(' ');
		}
		n++;
	}
	putchar('\n');
	return (0);
}
