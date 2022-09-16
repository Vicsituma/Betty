#include <stdio.h>
#include "main.h"
/**
 * print_diagonal - prints a diagoonal line in terminal
 * @n: length of diagonal
*/
void print_diagonal(int n)
{
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
			_putchar('\\');
		_putchar('\n');
	}
}
