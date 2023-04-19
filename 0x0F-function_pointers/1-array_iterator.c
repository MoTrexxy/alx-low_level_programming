#include "function_pointers.h"

/**
 * array_iterator - main funct
 * @array: a array
 * @size: array size
 * @action: a pointer to the function needed
 * Return: zero
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
