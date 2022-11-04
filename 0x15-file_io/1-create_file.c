#include "main.h"
/**
 * create_file - creates a file
 * @filename: name of the file
 * @text_content: string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int o, w, len = strlen(text_content) - 1;

	if (filename == NULL)
		return (-1);

	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, len);
	if (0 == -1 || w == -1)
		return (-1);

	close(o);
	return (1);
}
