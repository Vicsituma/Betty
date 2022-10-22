#include <stdio.h>
#include "main.h"
/**
 * rev_string -
*/

void rev_string(char *s)
{
	int i, len;
	char c;

	while (s++)
		len++;
	for (i = 0; i < len / 2; i++)
	{
		c = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = c;
	}
	for (i = 0; i < len; i++)
		_putchar(s[i]);

	_putchar('\n');
}

