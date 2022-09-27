#include <stdio.h>
#include <string.h>

int main(void)
{	
	int num = 123;
	int *pr2;
	int **pr1;

	pr2 = &num;
	pr1 = &pr2;

	printf("\n value of num is: %d", num);
	printf("\n value of num using pr2 is: %d", *pr2);
	printf("\n value of num using pr1 is: %d", **pr1);
	
	printf("\n Address of num is: %p", &num);
	printf("\n Address of num using pr2 is: %p", pr2);
	printf("\n Address of num using pr1 is: %p", *pr1);

	printf("\n value of Pointer pr2 is: %p:", pr2);
	printf("\n value Pointer pr2 using pr1 is: %p", *pr1);

	printf("\n address of pointer pr2 is: %p", &pr2);
	printf("\n address of pointer pr2 using pr1 is: %p", pr1);

	printf("\n value of pointer pr1 is: %p", pr1);
	printf("\n address of pointer pr1 is: %p", &pr1);

	return (0);
}
