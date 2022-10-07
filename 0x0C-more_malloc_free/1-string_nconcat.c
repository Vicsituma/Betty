#include "main.h"
#include <string.h>
/**
 * *string_nconcat - concatenates two strings.
 * @s1: string
 * @s2: string to add
 * @n: no. of bytes in string two to add
 * Return: a pointer or NULL
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j = 0, len1, len2;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);

	ptr = malloc(sizeof(char) * (len1 + n + 1));
	if (!ptr)
		return (NULL);

	for (i = 0; i < len1; i++)
		ptr[i++] = s1[i];

	for (j = 0; s2[j] && j < n; j++)
	{
		ptr[i++] = s2[j];
	}i
	ptr[i] = '\0';

	return (ptr);
}
