#include "main.h"
/**
 * printfirst - prints before main function.
 *
 */
void printfirst() __attribute__((constructor));

void printfirst(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
