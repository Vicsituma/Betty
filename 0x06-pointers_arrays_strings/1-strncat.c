#include "main.h"
/**
 * *_strncat - concatenates two strings
 * @dest: first string
 * @src: second string
 * @n: where to end string 2
 * Return:  a pointer to the resulting string dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;

	while (dest[i] != '\0')
	{
		++i;
	}
	for (j = 0; src[j] != '\n'; ++j, ++i)
	{
		if (j == n)
			break;
		dest[i] = src[j];
	}
	if (j >= n)
		return (dest);
	else
	{
		dest[i] = '\0';
		
		return (dest);
	}
}
