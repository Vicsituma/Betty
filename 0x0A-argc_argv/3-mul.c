#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers.
 * @argc: argument count
 * @argv: array of arguments
 * Return: 0 (success) or 1(error)
*/
int main(int argc, char *argv[])
{
	int i;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", i);
	return (0);
}
