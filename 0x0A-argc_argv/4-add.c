#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: array of arguments
 * Return: 0(success) or 1(error)
*/
int main(int argc, char *argv[])
{
	int i, k;
	int j = 0;

	if (argc < 1)
		printf("0");
	for (i = 1; i < argc; i++)
	{
		for (k = 0; argv[i][k]; k++)
		{
			if (argv[i][k] < '0' || argv[i][k]  > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		j += atoi(argv[i]);
	}
	printf("%d\n", j);
	return (0);
}
