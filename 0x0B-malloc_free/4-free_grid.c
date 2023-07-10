#include "main.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * free_grid - frees 2 dimensional array
 * @grid: 2 dimensional grid
 * @height: height of grid
 * Return: no value
 */
void free_grid(int **grid, int height)
{
	int j;

	for (j = 0; j < height; j++)
	{
		free(grid[j]);
	}
	free(grid);
}
