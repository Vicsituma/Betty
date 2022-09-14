#include <stdio.h>
#include "main.h"
/**
* print_to_98 - prints all natural numbers from n to 98
* @n: initial number
* Return: none
*/
void print_to_98(int n)
{
	int i = n;

	for (i = n; i <= 98; i++)
{
		_putchar((i + '0'));
		_putchar(',');
		_putchar(' ');
}
	_putchar('\n');
}
