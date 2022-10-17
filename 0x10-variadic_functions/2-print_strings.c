#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - prints strings, followed by a new line.
 * @separator: string to separate other strings
 * @n: number of strings to print
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int n;
	int i;
	char c;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		c = (va_arg(ap, int));
		if (c == NULL)
			printf("nil");
		else
			printf("%s", c);
		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
}
