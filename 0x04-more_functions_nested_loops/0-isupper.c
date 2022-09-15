#include <stdio.h>
#include "main.h"
/**
 * _isupper - checks if a character is uppercase
 * @c - a character
 * Returns: 1 (True), 0(False)
 */
int _isupper(int c);
{
	char i;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (c == i)
			return (1);
		else
			return (0);
	}
}

