#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;

	if (n > 0)
	{
	va_start(arg, n);
		for (i = 1; i <= n; i++)
		{
			printf("%d", va_arg(arg, int));
				if (i != n && separator != NULL)
					printf("%s", separator);
		}
		va_end(arg);
	}
	printf("\n");
}
