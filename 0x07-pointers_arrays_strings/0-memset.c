#include "main.h"

/**
* _memset - a function that fills memory
* @s: memory area
* @b: constant byte
* @n: bytes of the memory
* Return: pointer to the memory area s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int = i;
	char *mot = s;

	for (i = 0; i < n; i++)
	{
	*(mot + i) = b;
	}

	return (mot);
}
