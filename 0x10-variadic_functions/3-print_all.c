#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all -  prints anything.
 * @format: arguments type
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	int i;
	size_t counter = 0;
	char c, temp, *str;
	float f;

	va_start(ap, format);
	while (format && counter < strlen(format))
	{
		temp = *(format + counter);
		switch (temp)
		{
			case 'c':
				c = va_arg(ap, int);
				printf("%c", c);
				break;
			case 'i':
				c = va_arg(ap, int);
				printf("%d", i);
				break;
			case 's':
				str = va_arg(ap, char*);
				if (!str)
					str = "(nil)";
				printf("%c", str);
				break;
			case 'f':
				f = va_arg(ap, double);
				printf("%f", f);
				break;
		}
		if ((temp == 'c' || temp == 'i' || temp == 's' || temp == 'f') &&
				counter < strlen(format) - 1)
			printf(", ");
		counter++;
	}
	printf("\n");
}
