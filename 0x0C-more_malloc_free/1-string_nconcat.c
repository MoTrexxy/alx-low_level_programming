#include <stdlib.h>
#include <stdlib.h>
#include "main.h"

/**
* _strsize - function
* @string: string
* Return: string size
*/
int _strsize(char *string)
{
	int m;

	for (m = 0; string[m] != '\0'; m++)
		;
	return (m);
}
/**
* string_nconcat - a function that concatenates strings s1 and s2
* @s1: string 1
* @s2: string 2
* @n: integer
* Return: null
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *pntr;
	int num, size, m, o;

	num = n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (num < 0)
		return (NULL);
	if (num >= _strsize(s2))
		num = _strsize(s2);

	size = _strsize(s1) + num + 1;

	pntr = malloc(sizeof(*pntr) * size);
	if (pntr == NULL)
		return (NULL);

	for (m = 0; s1[m] != '\0'; m++)
		pntr[m] = s1[m];
	for (o = 0; o < num; o++)
		pntr[m + o] = s2[o];
	pntr[m + o] = '\0';

	return (pntr);
}
