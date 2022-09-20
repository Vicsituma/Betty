#include <stdio.h>
/**
 * _strlen - returns the length of a string
 * @s: string to give length
 * Return: length of string
*/
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*s++)
		i++;

	return(i);
}
