#include <stdlib.h>
#include "main.h"

/**
* *array_range - main function
* @min: minimum values
* @max: maximum values
* Return: null
*/
int *array_range(int min, int max)
{
	int *pntr;
	int m, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	pntr = malloc(sizeof(int) * size);

	if (pntr == NULL)
		return (NULL);

	for (m = 0; min <= max; m++)
		pntr[m] = min++;

	return (pntr);
}
