#include "main.h"
/**
 * create_file - creates a file
 * @filename: name of the file
 * @text_content: string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	char *buffer;
	int o, w;

	if (filename == NULL)
		return (-1);
	buffer = malloc(sizeof(char) * strlen(text_content));
	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(STDOUT_FILENO, buffer, strlen(text_content));
	if (0 == -1 || w == -1)
		return (-1);

	free(buffer);
	close(o);
	return (1);
}
