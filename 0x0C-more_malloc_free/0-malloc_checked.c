#include "main.h"
/**
 * *malloc_checked - locates memory using malloc
 * @b: size to allocate
 * Return: a pointer to the allocated memory
*/
void *malloc_checked(unsigned int b)
{
	int *i;

	i = malloc(sizeof(unsigned int) * b);
	if (i == NULL)
	{
		_putchar(9 + '0');
		_putchar(8 + '0');
	}
	return (i);
}
