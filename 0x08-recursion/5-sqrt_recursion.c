#include"main.h"
/**
 * find_root - find square root of n, starting from 0
 * @n: n
 * @r: test this root
 * Return: natural square root, or -1 if not natural root
 */
int find_sqrt(int n, int r)
{
	if (r * r > n)
		return (-1);

	if (r * r == n)
		return (r);
	return (find_sqrt(n, r + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: The number to return the square root of.
 * Return: natural square root, or -1 if not natural root
 */
int _sqrt_recursion(int n)
{
	int r = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (find_sqrt(n, r));
}
