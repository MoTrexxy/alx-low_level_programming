#include "main.h"

/**
* _strlen - returns the length of a string
* @s: string to assess
* Return: length of the string
*/
int _strlen(char *s)
{
	int m;

	m = 0;

	while (s[m] != '\0')
	{
		m++;
	}

	return (m);
}
