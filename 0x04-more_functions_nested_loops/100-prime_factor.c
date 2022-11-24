#include <stdio.h>
#include <stdlib.h>

/**
 * main-  finds and prints the largest prime factor
 * of the number 612852475143, followed by a new line
 * Return: nothing
 */
int main(void)
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
	}
	printf("%ld\n", k);
	return (0);
}
