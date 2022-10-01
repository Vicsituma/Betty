#include "main.h"
/**
 * main - prints the number of arguments passed into it.
 * @argc: number of arguments passed to func
 * @argv: array of arguments
 * Return: always 0
*/
int main(int argc, char  __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
