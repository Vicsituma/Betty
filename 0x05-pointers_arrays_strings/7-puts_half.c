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
	for (j = (i / 2); j <= i; j++)
	{
		_putchar(str[j]);
	}
}

