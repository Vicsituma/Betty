#include "main.h"
#include <string.h>
/**
 * *_calloc - allocates memory for an array, using malloc.
 * @nmemb: no of elements in array
 * @size: size
 * Return: none
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	arr = malloc(nmemb * size);
	if (!arr)
	{
		return (NULL);
	}
	else
	{
		memset(arr, 0, nmemb * size);
	}

	return (arr);
	free(arr);
}
