#include"main.h"
/**
 * print_triangle - prints a triangle, followed by a new line
 * @size:  size of the triangle
 */
void print_triangle(int size)
{
	int a;
	int b;
	int i;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 1; a <= size; a++)
		{
			for (b = 1; b <= (size - a); b++)
				_putchar(' ');

			for (i = 1; i <= a; i++)
				_putchar('#');

			_putchar('\n');
		}
	}
}
