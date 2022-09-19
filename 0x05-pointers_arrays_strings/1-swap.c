#include <stdio.h>
/**
 * swap_int -  swaps the values of two integers.
 * @a: first pointer
 * @b: second pointer
 * Return: none
*/
void swap_int(int *a, int *b)
{
	int i;	
	i = *a;
	*a = *b;
	*b = i;
}
