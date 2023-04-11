#include "main.h"
#include <stdlib.h>
/**
* create_array - function that creates an array of chars
* @size: integer size
* @c: char c
* Return: null if size is 0, a pointer to the array or null if it fails
*/
char *create_array(unsigned int size, char c)
{
	char *cr;
	unsigned int m;

	if (size == 0)
		return (NULL);

	cr = malloc(sizeof(c) * size);

	if (cr == NULL)
		return (NULL);

	for (m = 0; m < size; m++)
		cr[m] = c;

	return (cr);
}
