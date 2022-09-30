#include "main.h"
/**
 * whatsmyname -  prints its name, followed by a new line.
 * @argc: argument count
 * @argv: array containing the arguments
 * Returns: 0
 */
int whatsmyname(int argc, char *argv[])
{
	int i;
	for (i = 0; i < argc; i++)
	
		printf("%s\n", argv[0]);

	return (0);
}
