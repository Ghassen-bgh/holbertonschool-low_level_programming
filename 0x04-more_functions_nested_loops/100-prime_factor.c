#include<stdio.h>
/**
 * main - finds and prints the largest prime factor
 *
 * Return: 0
 */

int main(void)
{
	long int n = 612852475143;
	long int div = 2;
	long int maxFact;

	while (n != 0)
	{
		if (n % div != 0)
		{
			div = div + 1;
		}
		else
		{
			maxFact = n;
			n = n / div;
			if (n == 1)
			{
				printf("%ld is the largest prime factor ! \n", maxFact);
				break;
			}
		}
	}
	return (0);
}
