#include <stdio.h>
#include "main.h"
/**
* print_last_digit -returns value of the last digit
* @n: number to get last digit
*Return: the last digit
*/
int print_last_digit(int n)
{
	_putchar('(n % 10)');
	return (n % 10);
}
