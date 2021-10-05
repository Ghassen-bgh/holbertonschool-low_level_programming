#include "main.h"
/**
 * print_last_digit - print last digit of integer
 * @n: integer
 * Return: last digit of number
 */
int print_last_digit(int n)
{
	int l;

	if (n < 0)
		n *= -1;

	l = n % 10;
	_putchar('0' + l);
	return (l);

}
