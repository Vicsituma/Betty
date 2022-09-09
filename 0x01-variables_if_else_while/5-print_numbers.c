#include <stdio.h>
/**
*main - program that prints numbers 0 to 9
*Return: 0 (success)
*/
int main(void)
{
	int i;

	i = 0;
	while (i < 10)
{
		printf("%d", i);
		i++;
}
	printf("\n");
	return (0);
}
