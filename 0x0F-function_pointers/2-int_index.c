#include "function_pointers.h"

/**
 * int_index - main funct that sarches for an integer
 * @array: array to search
 * @size: no of elements in the array
 * @cmp: pointer to the function
 * Return: 0 or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int m;

	if (array && cmp)
	{
		for (m = 0; m < size; m++)
		{
			if (cmp(array[m]) != 0)
				return (m);
		}
	}

	return (-1);
}
