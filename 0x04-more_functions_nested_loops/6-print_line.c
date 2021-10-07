#include"main.h"
/**
 * print_line - draws a straight line in the terminal
 * @n: number of times the character _ should be printed
 */

void print_line(int n)
{
	int times = n;

	for (times = n; times > 0; times--)
		_putchar('_');
	_putchar('\n');
}
