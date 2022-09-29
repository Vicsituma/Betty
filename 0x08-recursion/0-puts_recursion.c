#include "main.h"
/**
 * _puts_recursion - prints a string, followed by a new line.
 * @s: a string to print
 * Returns: none
*/
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recurssion(s + 1);
	}
	else
		_putchar('\n');
}
