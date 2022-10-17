#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: symbol to separate
 * @n: numer of arguments
 * Return: nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (i == (n - 1))
		{
			printf("\n");
			break;
		}
		if (separator == NULL)
			continue;
		else
			printf("%s ", separator);
	}
	va_end(ap);
}
