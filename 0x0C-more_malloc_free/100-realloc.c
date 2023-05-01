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
	char *ptr;
	char *old_ptr;
	unsigned int m;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	ptr = malloc(new_size);
	if (!ptr)
		return (NULL);

	old_ptr = ptr;

	if (new_size < old_size)
	{
		for (m = 0; m < new_size; m++)
			ptr[m] = old_ptr[m];
	}

	if (new_size > old_size)
	{
		for (m = 0; m < old_size; m++)
			ptr[m] = old_ptr[m];
	}

	free(ptr);
	return (ptr);
}
