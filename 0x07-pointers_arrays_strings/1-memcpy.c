#include "main.h"
/**
 * *_memcpy - copies memory area.
 * @dest: memory area to copy to
 * @src: memory area to copy from
 * @n: number of bytes to copy
 * Return: dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;
	int k = n;

	for (i = 0; i < k; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
