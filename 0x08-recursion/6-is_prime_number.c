#include"main.h"
/**
 * is_divisible - Checks if a number is divisible.
 * @n: integer
 * @d: The divisor.
 *
 * Return: 0 if the number is divisible
 *         1 if the number is not divisible
 */
int is_divisible(int n, int d)
{
	if (n % d == 0)
		return (0);

	if (d == n / 2)
		return (1);

	return (is_divisible(n, d + 1));
}

/**
 * is_prime_number - check if prime
 * @n: number to check
 * Return: 1 if prime, 0 if not
 */

int is_prime_number(int n)
{
	int d = 3;

	if (n % 2 == 0 || n < 2)
		return (0);
	if (n == 2)
		return (1);

	return (is_divisible(n, d));
}
