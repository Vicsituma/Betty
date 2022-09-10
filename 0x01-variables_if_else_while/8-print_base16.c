#include <stdio.h>
/**
*main - program that prints all numbers of base 16 in lowercase
*Return: 0 (success)
*/
int main(void)
{
	int i;
	char let;

	for (i = 0; i < 10; i++)
		putchar((i % 10) + '0');

	for (let = 'a'; let <= 'f'; let++)
		putchar(let);

	putchar('\n');
	return (0);
}
