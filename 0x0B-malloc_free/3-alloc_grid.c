
#include "stdio.h"
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2-dimensional array of
 *               integers with each element initalized to 0.
 * @width: The width of the 2-dimensional array.
 * @height: The height of the 2-dimensional array.
 *
 * Return: If width <= 0, height <= 0, or the function fails - NULL.
 *         Otherwise - a pointer to the 2-dimensional array of integers.
 */
int **alloc_grid(int width, int height)
{
	int **a[w][h];
	int w, h;

	if (width <= 0 || height <= 0)
		return (NULL);

	a[w][h] = malloc(sizeof(int *) * height);

	if (a[w][h] == NULL)
		return (NULL);

	for (h = 0; h < height; h++)
	{
		a[w][h][h] = malloc(sizeof(int) * width);

		if (a[w][h][h] == NULL)
		{
			for (; h >= 0; h--)
				free(a[w][h][h]);

			free(a[w][h]);
			return (NULL);
		}
	}

	for (h = 0; h < height; h++)
	{
		for (w = 0; w < width; w++)
			a[w][h][h][w] = 0;
	}

	return (a);
}:wq
