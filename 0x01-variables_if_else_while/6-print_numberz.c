#include <stdio.h>
/**
*main - this program prints int using putchar
*Return: Always 0
*/
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar(((char)i));

	putchar('\n');

	return (0);
}
