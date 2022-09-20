#include <stdio.h>
#include "main.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: string for reverse printing
*/
void print_rev(char *s)
{
	int i;

	 while (*s++)
		 i++;
	 for (i = (i - 1); i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
