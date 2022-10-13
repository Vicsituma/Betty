#include "main.h"
/**
 * int_index - searches for an integer
 * @array: an array of integers
 * @size: number of elements in the array
 * @cmp: a pointer to the function to be used to compare values
 * Return: the index of the first element or -1 for no match
 *         and empty array
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size < 1 || cmp == NULL)
		return -1;
	for (i = 0; i < (int)size; i++)
	{
		if (cmp(array[i])
				return (i);
	}
	return (-1);
}
