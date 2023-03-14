#include <stdlib.h>
/**
 *free_grid - frees allocated memeory
 *@grid: to be freed
 *@height: Number of rows
 *Return: 2 dimensional array
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
