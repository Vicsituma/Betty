#include <stdio.h>
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
		_putchar(0 + '0');
		for (j = 0; j <= n; j++)
    		{
			 _putchar(',');
			 _putchar(' ');
			k = i * j;
			if (k >= 10)
			{
				_putchar((k / 10) + '0');
			}
			if (j < 9)
			{
				_putchar(' ');
			}
			_putchar((k % 10) + '0');
		}
		if (i < 9)
			_putchar('\n');
}
