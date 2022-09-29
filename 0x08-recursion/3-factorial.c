#include "main.h"
/**
 * factorial -  returns the factorial of a given number.
 * @n: an integer to for factorials
 * Return: the factorial
*/
int factorial(int n)
{
	int i;

	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	
	i = n * factorial(n-1);
	return (i);
}
