#include "main.h"
/**
 * *array_range -  creates an array of integers.
 * @min: minimum integer
 * @max: maximum integer
 * Return:the pointer to the newly created array
*/
int *array_range(int min, int max)
{
	int *arr, i, j;

	if (min > max)
		return (NULL);
	i = max - min;
	arr = malloc(sizeof(int) * (i + 1));
	if (!arr)
		return (NULL);
	j = 0;
	for (i = min; i <= max; i++)
		arr[j++] = i;
	return (arr);

}
