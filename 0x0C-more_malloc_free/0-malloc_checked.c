#include "main.h"
/**
 * *malloc_checked - locates memory using malloc
 * @b: size to allocate
 * Return: a pointer to the allocated memory
*/
void *malloc_checked(unsigned int b)
{
	int *i;

	i = malloc(b);
	if (!i)
	{
		exit(98);
	}
	return (i);
}
