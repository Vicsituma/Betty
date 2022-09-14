#include <stdio.h>
#include "main.h"
/**
* print_alphabet - prints the alphabets, in lowercase, followed by newline
* Return: none
*/
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	_putchar('\n');
}
