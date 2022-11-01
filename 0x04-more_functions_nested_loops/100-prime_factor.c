#include <stdio.h>
#include <stdlib.h>
<<<<<<< HEAD
=======
#include "main.h"
>>>>>>> 3ed6f9bb53dc71d463d04cf756b6807bca34bc3a
/**
 * prime_factor -  finds and prints the largest prime factor
 * of the number 612852475143, followed by a new line
 * Return: nothing
 */
void prime_factor(void)
{
	long int i,  j = 612852475143;

	for (i = 1; i <= j; i++)
	{
		if (i == j)
			printf("%ld", i);
		if ((j % i) == 0)
			j = (j / i);
		else if (i == 612852475143)
		{
			break;
		}
	}
}
