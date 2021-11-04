#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - prints strings, followed by a new line.
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	unsigned int i;
	char *s;

	if (n > 0)
	{
		va_start(str, n);
		for (i = 1; i <= n; i++)
		{
			s = va_arg(str, char *);
			if (s == NULL)
				printf("(nil)");
			else
				printf("%s", s);
			if (i != n && separator != NULL)
				printf("%s", separator);
		}
		va_end(str);
	}
	printf("\n");
}
