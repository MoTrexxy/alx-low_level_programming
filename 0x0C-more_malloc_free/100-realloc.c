#include <stdlib.h>
#include "main.h"

/**
* _realloc - a function reallocates a memory block using malloc and free
* @ptr: pointer
* @old_size: the size in bytes
* @new_size: new size
* Return: null
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *pntr1;
	char *old_pntr;
	unsigned int m;

	if (new_size == old_size)
		return (pntr);

	if (new_size == 0 && pntr)
	{
		free(pntr);
		return (NULL);
	}

	if (!pntr)
		return (malloc(new_size));

	pntr1 = malloc(new_size);
	if (!pntr1)
		return (NULL);

	old_pntr = pntr;

	if (new_size < old_size)
	{
		for (m = 0; m < new_size; m++)
			pntr1[m] = old_pntr[m];
	}

	if (new_size > old_size)
	{
		for (m = 0; m < old_size; m++)
			pntr1[m] = old_pntr[m];
	}

	free(pntr);
	return (pntr1);
}
