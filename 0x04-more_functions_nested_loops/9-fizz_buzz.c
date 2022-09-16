#include <stdio.h>
/**
 * main - prints out 100 with words for replacement of 3 and 5
 * and their multiples
*/
void main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i == 100)
			printf("%d", i);
		else if ((i % 15) == 0)
			printf("FizzBuzz ");
		else if ((i % 3) == 0)
			printf("Fizz ");
		else if ((i % 5) == 0)
			printf("Buzz ");
		else if (i == 100)
			printf("%d", i);
		else
			printf("%d ", i);
	}
	printf("\n");
}

