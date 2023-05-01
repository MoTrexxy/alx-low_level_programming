#include <stdlib.h>
#include "main.h"

/**
 * count_word - main funct
 * @s: string s
 * Return: words nos
 */
int count_word(char *s)
{
	int flag, m, n;

	flag = 0;
	n = 0;

	for (m = 0; s[m] != '\0'; m++)
	{
		if (s[m] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			n++;
		}
	}

	return (n);
}
/**
 * **strtow - other funct
 * @str: string s
 * Return: null
 */
char **strtow(char *str)
{
	char **matrix, *temp;
	int i, k = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				temp = (char *) malloc(sizeof(char) * (c + 1));
				if (temp == NULL)
					return (NULL);
				while (start < end)
					*temp++ = str[start++];
				*temp = '\0';
				matrix[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}

	matrix[k] = NULL;

	return (matrix);
}
