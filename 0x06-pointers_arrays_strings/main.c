#include <stdio.h>

int main(void)
{	
	int marks[10], i, n, sum = 0;
	double average;

	printf("Enter number of elements: ");
	scanf("%d", &n);
	
	for (i = 0; i < n; ++i)
	{
		printf("Enter number %d: ", i + 1);
		scanf("%d", &marks[i]);
		sum += marks[i];
	}
	average = (double) sum / n;
	printf("Average = %.21f", average);
	return (0);
}
