#include "main.h"
/**
 * *leet - encodes a string into 1337.
 * @str: string to encode
 * Return: a coded string of integers.
*/
char *leet(char *str)
{
	int i = 0;
	int j = 0;
	char leet[] = {'a', 'e', 'o', 't', 'l'};
	char tlee[] = {'A', 'E', 'O', 'T', 'L'};
	char a[] = {'4', '3', '0', '7', '1'};

	while (str[i])
	{
		for (j; j <= 4; j++)
		{
			if (str[i] == leet[j] || tlee[j])
				str[] = a[j];
		}
		i++;
	return (str)
	}
}
