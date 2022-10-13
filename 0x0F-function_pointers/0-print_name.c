#include "function_pointers.h"
/**
 * print_name - prints name
 * @name: pointer to a character variable
 * @f: a funtion pointer
 * Return: none
*/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
