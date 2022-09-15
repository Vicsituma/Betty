i#include <stdio.h>
#include "main.h"
/**
* times_table - prints the 9 times table, starting with 0
* Return: none
*/
void times_table(void)
{
	int i;
	int j;
	int k;
	int n = 9;

	for (i = 0; i <= 9; i++)
{
		for (j = 0; j <= n; j++)
{
			_putchar(',');
			_putchar(' ');
			k = i * j;

			if (k <= 99)
				_putchar(' ');
			if (k <= 9)
				_putchar(' ');
			if (k >= 100)
			{
				_putchar((k / 100) + '0');
				_putchar((k / 10) % 10 + '0');
			}
			else if (k <= 99 && k >= 10)
			{
				_putchar((k / 10) + '0');
			}
			_putchar((k % 10) + '0');
}
		_putchar('\n');
}
}
