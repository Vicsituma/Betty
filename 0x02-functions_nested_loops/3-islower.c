#include <stdio.h>
#include "main.h"
/**
* _islower -checks for a lowercase character
* @c:  a character to check whether it's lowercase
*
* Return: none
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
