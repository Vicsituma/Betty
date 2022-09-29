#include <stdio.h>
#include "main.h"
/**
 * rev_string - reverses string
 * @s: string to reverse
*/
void rev_string(char *s)
{
	int i;
	
	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
	for (i = (i - 1); i >= 0; i--)
		_putchar(s[i]);
}

