#include <stdio.h>
#include "main.h"
/**
* print_last_digit -returns value of the last digit
* @n: number to get last digit
*Return: the last digit
*/
int print_last_digit(int n)
{
	char c;

	c = ("%d", n % 10);
	_putchar(c);
	return (n);
}
