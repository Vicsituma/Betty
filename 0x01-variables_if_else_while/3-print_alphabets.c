#include <stdio.h>
/**
*main - program to print alphabet letters in upper and lower
*Return: 0 (success)
*/
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
{
		putchar(c);
		putchar(toupper(c));
}
	putchar('\n');
	return (0);
}
