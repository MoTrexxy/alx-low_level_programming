#include "main.h"
#include <stdio.h>

/**
* _strpbrk - searches a string for any of a set of bytes
* @s: string to search
* @accept: bytes to search for
* Return: NULL
*/

char *_strpbrk(char *s, char *accept)
{
	int m;

	while (*s)
	{
		for (m = 0; accept[m]; m++)
		{
			if (*s == accept[m])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
