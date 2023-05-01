#include <stdlib.h>
#include "main.h"
/**
  * _realloc - a function reallocates a memory block using malloc and free
  * @ptr: pointer
  * @old_size: size in bytes
  * @new_size: new size
  * Return: null
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if ((new_size == 0) && (ptr != NULL))
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
			return (NULL);
	}
	if (new_size > old_size && (ptr != NULL))
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
			return (ptr);
		for (i = 0; i < old_size; i++)
			ptr[i] = *((char *)ptr + 1);
		free(ptr);
	}

	return (ptr);
}
