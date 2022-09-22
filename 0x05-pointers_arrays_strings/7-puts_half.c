#include <stdio.h>
#include "main.h"
/**
 * puts_half -  prints half of a string, followed by a new line.
 * @str: string to print
*/
void puts_half(char *str)
{
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
	}
	if (i % 2 == 0)
	{
		for (j = (i / 2); j <= i; j++)
		{
			_putchar(str[j]);
		}
	}
	else
	{
		for (j = (i / 2) + 1; j <= i; j++)
		{
			_putchar(str[j]);
		}
	}
}
