#include <stdio.h>
/**
*main - program that prints all numbers of base 16 in lowercase
*Return: 0 (success)
*/
int main(void)
{
	int i;

	for (i = 0; i < 10; ++i)
{
		putchar("%x", i);
}
	putchar("\n");
	return (0);
}
