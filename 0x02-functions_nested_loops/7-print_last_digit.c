#include <stdio.h>
#include "main.h"
/**
* print_last_digit -returns value of the last digit
* @n: number to get last digit
*Return: the last digit
*/
int print_last_digit(int n)
{
	n = n % 10;
	if (n < 0)
{
		n = (n * -1);
		_putchar(n + '0');
		return (n);
}
	else
{
		_putchar(n + '0');
		return (n);
}
}
