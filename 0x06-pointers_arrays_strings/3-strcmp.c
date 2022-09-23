#include "main.h"
/**
 * _strcmp - compares two strings.
 * @s1: first string
 * @s2: string to compare
 * Return: less than, equal to or greater than
*/
int _strcmp(char *s1, char *s2)
{
	int i, j;

	i = 0;
	j = 0;
	while (*s1 != '\0')
	{
		i++;
		s1++;
	}
	while (*s2 != '\0')
	{
		j++;
		s2++;
	}
	if (i > j)
		return (15);
	else if (i  == j)
		return (0);
	else
		return (-15);
}
