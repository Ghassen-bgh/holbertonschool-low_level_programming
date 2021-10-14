#include"main.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a: array
 * @n: number of elements of the array
 */

void reverse_array(int *a, int n)
{
	int *p, i, s;
	int x;

	p = a;
	for (i = 0; i < n; i++)
	{
		p++;
	}
	for (s = 0; s < i / 2; s++)
	{
		x = a[s];
		a[s] = *p;
		*p = x;
		p--;
	}
}
