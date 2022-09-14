#include <stdio.h>
#include "main.h"
/**
* print_to_98 - prints all natural numbers from n to 98
* @n: initial number
* Return: Always 0
*/
void print_to_98(int n)
{
	for (int i = n; i <= 98; i++)
{
		_putchar((i + '0'));
		_putchar(',');
		_putchar(' ');
}
	_putchar('\n');
	return (0);
}
