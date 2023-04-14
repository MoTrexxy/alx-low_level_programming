#include "main.h"

/**
* *_strcat - concatenates two strings
* @dest: destination string
* @src: source string
* Return: return value of string destination
*/

char *_strcat(char *dest, char *src)
{
	int m;
	int n;

	m = 0;
	n = 0;

	while (dest[m] != '\0')
	{
		m++;
	}

	while (src[n] != '\0')
	{
		dest[m] = src[n];
		n++;
		m++;
	}

	dest[m] = '\0';
	return (dest);
}
