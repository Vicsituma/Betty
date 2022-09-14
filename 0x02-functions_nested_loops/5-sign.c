#include <stdio.h>
#include "main.h"
/**
* print_sign - prints the sign of a number
* @n: a number to check whether ositive or negative
*Return: 1 (for +), 0 (for zero), -1 (for -)
*/
int print_sign(int n)
{
	if (n < 0)
{
		_putchar('-');
		return (-1);
}
	else if (n > 0)
{
		_putchar('+');
		return (1);
}
	else
{
		_putchar('0');
		return (0);
}
}
