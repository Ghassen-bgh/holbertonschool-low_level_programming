#include<stdio.h>
/**
 * main - finds and prints the largest prime factor
 *
 * Return: 0
 */

int main(void)
{
	unsigned long n = 612852475143;
	unsigned long i = 2;

	while (i < n)
	{
		if (n % i == 0)
		{
			n = n / i;
			i = 2;
		}
		else
			i++;
	}
	printf("%lu\n", n);
	return (0);
}
