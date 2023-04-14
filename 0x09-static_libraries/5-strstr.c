#include "main.h"
#include <stdio.h>

/**
*_strstr - locates a substring in a string
* @haystack: string to search for
* @needle: the substring to locate
* Return: pointer to the beginning of the substring in the string
*/
char *_strstr(char *haystack, char *needle)
{
	int m, n;

	for (m = 0; haystack[m] != '\0'; m++)
	{
		for (n = 0; needle[n] != '\0'; n++)
		{
			if (haystack[m + n] != needle[n])
				break;
		}
		if (!needle[n])
			return (&haystack[m]);
	}
	return (NULL);
}
