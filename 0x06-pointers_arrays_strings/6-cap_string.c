#include "main.h"
/**
 * cap_string - changes all lowercase letters of a string to uppercase.
 * @str: a string
 * Return: a string in uppercase
*/
char *cap_string(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (str[i] == ' ')
				str[i + 1] -= 32;
		}
		i++;
	}
	return (str);
}
