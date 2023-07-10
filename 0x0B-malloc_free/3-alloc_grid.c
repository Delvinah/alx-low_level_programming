#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Allocates memory for a 2D grid of integers.
 * @width: The width of the grid.
 * @height: The height of the grid.
 * Return: A pointer to the 2D grid,
 * returns NULL if memory allocation fails
 * or if width or height is non-positive.
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int row, col;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);

	for (row = 0; row < height; row++)
	{
		grid[row] = malloc(sizeof(int) * width);

		if (grid[row] == NULL)
		{
			for (; row >= 0; row--)
				free(grid[row]);

			free(grid);
			return (NULL);
		}
		for (col = 0; col < width; col++)
			grid[row][col] = 0;
	}

	return (grid);
}
