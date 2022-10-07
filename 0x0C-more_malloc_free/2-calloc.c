#include "main.h"
/**
 * *_calloc - allocates memory for an array, using malloc.
 * @nmemb: no of elements in array
 * @size: size
 * Return: none
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *arr, i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	arr = malloc(nmemb * size);
	if (!arr)
		return (NULL);

	for (i = 0; i < *(arr + i); i++)
		arr[i] = 0;

	return (arr);
}