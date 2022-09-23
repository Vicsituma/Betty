#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers.
 * @a: array to reverse
 * @n: the number of elements of the array
 * Return: none
*/
void reverse_array(int *a, int n)
{
	int i;

	for (i = n; i >= 0; i--)
	{
		_putchar(a[i] + '0');
	}
	_putchar('\0');
}
