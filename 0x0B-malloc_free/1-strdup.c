#include "main.h"
/**
 * *_strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string
 * Return: NULL if str = NULL
*/
char *_strdup(char *str)
{
	char *j;
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		len++;

	j = malloc(sizeof(char) * (len + 1));

	if (j == NULL)
		return NULL;

	for (i = 0; str[i]; i++)
		j[i] = str[i];
	j[len] = '\0';
	return (j);
}
