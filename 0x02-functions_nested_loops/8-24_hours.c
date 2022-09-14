#include <stdio.h>
#include "main.h"
/**
* jack_bauer - prints every minute of the day
*Returns: none
*/
void jack_bauer(void)
{
	int i;
	int j;

	for (i = 00; i < 24; i++)
{
		for (j = 00; j < 60; j++)
{
			printf("%d : %d", i, j);
			_putchar('\n');
}
