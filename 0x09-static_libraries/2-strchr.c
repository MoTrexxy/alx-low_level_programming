#include "main.h"

/**
* _strchr - locates a char in a string
* @s: string to locate
* @c: char to locate
* Return: s
*/

char *_strchr(char *s, char c)
{
	int m;

	for (m = 0; s[m] != '\0'; m++)
	{

		if (s[m] == c)
		{
			return (s + m);
		}
	}
	return (0);
}
