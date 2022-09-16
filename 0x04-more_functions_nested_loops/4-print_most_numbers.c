#include <stdio.h>
#include "main.h"
/**
 * print_most_numbers - prints the numbers 0 to 9
 * except 2 & 4, followed by a new line
 * Return: none
*/
void print_most_numbers(void)
{
	char i;

	for (i = '0'; i < '10'; i++)
	{
		if (i != '2' && i != '4')
			_putchar(i);
		else
			continue;
	}
	_putchar('\n');
}
