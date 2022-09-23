#include <stdio.h>
/**
 * numcomb - prints all possible different combinations of two digits
 * Return: none
*/
void numcomb(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (i == j)
			{
				continue;
			}
			else if ( j > i)
			{
				continue;
			}
			else
			{
				putchar(i + '0');
				putchar(j + '0');
			}
			if (i == 8 && j == 9)
				break;
			putchar(',');
			putchar(' ');
		}
	}
}
