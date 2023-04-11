#include "main.h"
#include <stdlib.h>
/**
* _strdup - unction returns a pointer to a new string.
* @str: string.
* Return: null if str equal to null
*/
char *_strdup(char *str)
{
	char *copiedstr;
	unsigned int m, n;

	if (str == NULL)
		return (NULL);

	for (m = 0; str[m] != '\0'; m++)
		;

	copiedstr = (char *)malloc(sizeof(char) * (m + 1));

	if (copiedstr == NULL)
		return (NULL);

	for (n = 0; n <= m; n++)
		copiedstr[n] = str[n];

	return (copiedstr);
}
