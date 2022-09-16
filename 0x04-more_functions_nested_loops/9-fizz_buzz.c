#include <stdio.h>
/**
 * main - prints out 100 with words for replacement of 3 and 5
 * and their multiples
 * Return: Always 0
*/
int main(void)
{
	int i;

	for (i = 1; i < 100; i++)
	{
		if ((i % 15) == 0)
			printf("FizzBuzz ");
		else if ((i % 3) == 0)
			printf("Fizz ");
		else if ((i % 5) == 0)
			printf("Buzz ");
		else
			printf("%d ", i);
	}
	printf("Buzz");
	printf("\n");
	return (0);
}

