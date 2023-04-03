#include "main.h"

/**
* _memcpy - function that copies memory area
* @dest: memory area destination
* @src: memory area source
* @n: function copies number of bytes
* Return: returns a pointer to destination
*/

char *_memcpy(char *dest, char *src, unsigned int n);
{
	char *mdest = dest;
	char *msrc = src;

	while (n--)
	{
		*mdest++ = *msrc++;
	}
	return (dest);
}
