#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * prime_factor -  finds and prints the largest prime factor
 * of the number 612852475143, followed by a new line
 * Return: nothing
 */
void prime_factor(void)
{
	long int i, k, j = 612852475143;

	for (i = 1; i <= j; i++)
	{
		if (i < 2)
			continue;
		if (j % i == 0)
		{
			j = (j / i);
			k = i;
		}
		else if (i == 612852475143)
		{
			break;
		}
	}
	printf("%ld\n",k);
}
