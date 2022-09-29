#include <stdio.h>
#include "main.h"
/**
 * rev_string -
*/

void rev_string(char *s)
{
	int i = 0;
	int j;
	while (*s++)
		i++;

	for (j = 0; j <= i; j++)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
	for (; i >= 0; i--)
	{
		_putchar(s[i]);
	}
}

