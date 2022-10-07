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
	len2 = strlen(s2);

	if (n < len2)
		ptr = malloc(sizeof(char) * (len1 + n + 1));
	else
		ptr = malloc(sizeof(char) * (len1 + len2 + 1));
	if (!ptr)
		return (NULL);

	for (i = 0; i < len1; i++)
		ptr[i] = s1[i];

	while (n < len2 && j < n)
		ptr[i++] = s2[j++];

	while (n >= len2 && j < len2)
		ptr[i++] = s2[j++];

	return (ptr);
}
