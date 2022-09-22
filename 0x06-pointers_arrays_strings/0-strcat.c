#include "main.h"
/**
 * *_strcat - concatenates two strings
 * @dest: first string
 * @src: second string
 * Return:  a pointer to the resulting string dest
*/
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		++i;
	}
	for (j = 0; src[j] != '\n'; ++j, ++i)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}
