#include <stdio.h>
#include <stdlib.h>
/**
 * printfirst - prints before main function.
 *
 */
void printfirst(void) __attribute__((constructor));

void printfirst(void)
{
	printf("You're beat! and yet, you must allow,\n
			I bore my house upon my back!\n");
}
