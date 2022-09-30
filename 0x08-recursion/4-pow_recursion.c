#include "main.h"
/**
 * _pow_recursion - returns the value of x raised to the power of y.
 * @x: integer to square
 * @y: number of times to square
 * Return: value of x raised to the power of y
*/
int _pow_recursion(int x, int y)
{
	if (x < 1 || y < 1)
		return (-1);
	if (y == 1)
		return (x);
	x = x * _pow_recursion(x, y-1);
	return (x);
}
