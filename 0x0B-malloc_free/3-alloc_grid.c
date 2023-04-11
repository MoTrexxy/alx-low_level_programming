#include "main.h"
#include <stdlib.h>

/**
* alloc_grid - returns a pointer to a 2 dimensional array of integers.
* @width: width of the array.
* @height: height of the array.
* Return: 0
*/
int **alloc_grid(int width, int height)
{
	int **gridresult;
	int m, n;

	if (width < 1 || height < 1)
		return (NULL);

	gridresult = malloc(height * sizeof(int *));
	if (gridresult == NULL)
	{
		free(gridresult);
		return (NULL);
	}

	for (m = 0; m < height; m++)
	{
		gridresult[m] = malloc(width * sizeof(int));
		if (gridresult[m] == NULL)
		{
			for (m--; m >= 0; m--)
				free(gridresult[m]);
			free(gridresult);
			return (NULL);
		}
	}

	for (m = 0; m < height; m++)
		for (n = 0; n < width; n++)
			gridresult[m][n] = 0;

	return (gridresult);
}
