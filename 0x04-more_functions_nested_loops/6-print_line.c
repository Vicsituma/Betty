#include "main.h"
/**
 * print_line - draws a straight line in the terminal
 * @n: parameter for length
*/
void print_line(int n)
{
	char i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n')
}
