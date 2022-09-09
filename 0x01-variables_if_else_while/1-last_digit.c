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
	if (int(char(n)[-1]) > 5)
	{
		printf("Last digit of %d is %s and is greater than 5\n", n, char(n)[-1]);
	}
	else if (int(char(n)[-1]) == 0)
	{
		printf("Last digit of %d is %s and is 0\n", n, char(n)[-1]);
	}
	else
	{
		printf("Last digit of %d is %s and is less than 6 and not 0\n", n, char(n)[-1]);
	}

	return (0);
}
