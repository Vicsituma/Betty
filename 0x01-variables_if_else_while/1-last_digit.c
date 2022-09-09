#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - prints out the last digit of a random number
*Return: 0 (success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	i = char(n)
	if (i[-1] > 5]
	{
		printf("Last digit of %d is %s and is greater than 5\n", i[-1]);
	}
	else if (i[-1] == 0)
	{
		printf("Last digit of %d is %s and is 0\n", n, i[-1])
	}
	else
	{
		printf("Last digit of %d is %s and is less than 6 and not 0\n", n, i[-1])
	}

	return (0);
}
