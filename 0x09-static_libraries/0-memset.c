#include "main.h"

/**
* _memset - fills memory with constant byte
* @s: pointer to memory area
* @b: byte
* @n: number of bytes
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
