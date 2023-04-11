#include "main.h"
#include <stdlib.h>

/**
* str_concat - main function.
* @s1: first string.
* @s2: second string.
* Return: 0
*/
char *str_concat(char *s1, char *s2)
{
	char *copiedstr;
	unsigned int m, n, o, maxcount;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (m = 0; s1[m] != '\0'; m++)
		;

	for (n = 0; s2[n] != '\0'; n++)
		;

	copiedstr = malloc(sizeof(char) * (m + n + 1));

	if (copiedstr == NULL)
	{
		free(copiedstr);
		return (NULL);
	}

	for (o = 0; o < m; o++)
		copiedstr[o] = s1[o];

	maxcount = n;
	for (n = 0; n <= maxcount; o++, n++)
		copiedstr[o] = s2[j];

	return (copiedstr);
}
