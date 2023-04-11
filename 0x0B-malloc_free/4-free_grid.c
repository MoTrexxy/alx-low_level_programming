#include "main.h"
#include <stdlib.h>

/**
* free_grid - main function
* @grid: the address of the two dimensional
* @height: height of the grid
* Return: 0
*/
void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
