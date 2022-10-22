#include <stdio.h>
#include "main.h"
/**
 * rev_string - reverses a string.
 * @s: string to reverse
 * Return: Nothing
*/

void rev_string(char *s)
{
	int i, len;
	char c;

	while (s[len] != '\0')
		len++;
	_putchar(len + '0');
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

