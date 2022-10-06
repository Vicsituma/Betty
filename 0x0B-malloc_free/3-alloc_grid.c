#include "main.h"
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of 2D array
 * @height: the height
 * Return: returns a pointer to a 2 dimensional array.
 */
int **alloc_grid(int width, int height)
{
	int **td;
	int height_ind, w_ind;

	if (height <= 0 || width <= 0)
		return (NULL);
	td = malloc(sizeof(int *) *height);

	if (td == NULL)
		return (NULL);
	for (height_ind = 0; height_ind < height; height_ind++)
	{
		td[height_ind] = malloc(sizeof(int) * width);
		if (td[height_ind] == NULL)
		{
			for (; height_ind >= 0; height_ind--)
				free(td[height_ind]);

			free(td);
			return (NULL);
		}
	}
	for (height_ind = 0; height_ind < height; height_ind++)
	{
		for (w_ind = 0; w_ind < width; w_ind++)
			td[height_ind][w_ind] = 0;
	}
	return (td);
}

