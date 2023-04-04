#include "main.h"
#include <stddef.h>

/**
* _strpbrk - function locates the first occurrence in the string s
* @s: a string
* @accept: another string
* Return: a pointer to the byte in s
*/
char *_strpbrk(char *s, char *accept)
{
	char *m = s;

	while (*m)
	{
		char *n = accept;

		while (*n)
		{
			if (*m == *n)
				{
					return (m);
				}
			n++;
		}
		m++;
	}
	return NULL;
}
