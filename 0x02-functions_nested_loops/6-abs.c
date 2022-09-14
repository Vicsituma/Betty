#include <stdio.h>
#include "main.h"
/**
* _abs - prints absolute value of n integer
* @n: number to check
* Return: always 0
*/
int _abs(int n)
{
	if (n < 0)
{
		n = (n * -1);
		return (n);
}
	else
{
		return (n);
}
}
