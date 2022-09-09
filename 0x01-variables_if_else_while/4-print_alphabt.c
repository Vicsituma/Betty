#include <stdio.h>
/**
*main - program that prints ouat alphabets except q and e
*Return: 0 (success)
*/
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
{
		if (c == 'e' || c == 'q')
			continue;
		else
			putchar(c);
}
	putchar('\n');
	return (0);
}
