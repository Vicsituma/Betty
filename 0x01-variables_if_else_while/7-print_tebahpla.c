#include <stdio.h>
/**
*main - program to print alphabet letters in reverse
*Return: 0 (success)
 */

int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; --c)
{
		putchar(c);
}
	putchar('\n');
	return (0);
}
