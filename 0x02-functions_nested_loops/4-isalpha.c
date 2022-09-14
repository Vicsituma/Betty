#include <stdio.h>
#include "main.h"
/**
* _isalpha - returns if c is alphabet
* @c - parameter to check if its an alphabet
* Return: 1 (True) otherwise 0
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
