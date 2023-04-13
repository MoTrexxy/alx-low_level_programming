#include <stdlib.h>
#include "main.h"

/**
*_memset - function
* @s: char s
* @b: char b
* @n: integer n
* Return: s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int m;

	for (m = 0; m < n; m++)
	{
		s[m] = b;
	}

	return (s);
}

/**
* _calloc - function that allocates memory for an array using malloc
* @nmemb: number of elements
* @size: size of bytes
* Return: pointer to allocated memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pntr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	pntr = malloc(size * nmemb);

	if (pntr == NULL)
		return (NULL);

	_memset(pntr, 0, nmemb * size);

	return (pntr);
}
