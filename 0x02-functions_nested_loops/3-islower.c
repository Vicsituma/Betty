#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
* _islower -checks for a lowercase character
* @c:  a character to check whether it's lowercase
*
* Return: none
*/
int _islower(int c)
{
	if (islower(c))
		_putchar('1');
	else
		_putchar('0');
}
