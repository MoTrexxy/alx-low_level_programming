#include "main.h"

/**
* _strncat - concatenates two strings
* @dest : destination
* @src : source
* @n : number of bytes to use from source
* Return: dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int a;
	int d;

	a = 0;

	for (d = 0; d < 1000; d++)
	{
		if (dest[d] == '\0')
		{
			break;
		}
		a++;
	}

	for (d = 0; src[d] != '\0' && d < n; d++)
	{
		dest[a + d] = src[d];
	}
	dest[a + d] = '\0';
	return (dest);
}
