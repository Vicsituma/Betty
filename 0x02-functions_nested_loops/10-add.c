#include <stdio.h>
#include "main.h"
/**
* add - adds two integers
* @n: the first integer
* @i: the second integer
* Return:  an int(result)
*/
int add(int n, int i)
{
	int result;

	result = (n + i);
	_putchar(result + '0');
	return (result);
}
