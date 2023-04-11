#include "main.h"
#include <stdlib.h>

/**
* argstostr -  function that concatenates all the arguments of a program
* @ac: argument count
* @av: argument vector
* Return: pointer of an array of char
*/
char *argstostr(int ac, char **av)
{
	char *resultstr;
	int a, m, n, ma;

	if (ac == 0)
	{
		return (NULL);
	}
	for (a = m = 0; m < ac; m++)
	{
		if (av[m] == NULL)
			return (NULL);

		for (n = 0; av[m][n] != '\0'; n++)
			a++;
		a++;
	}

	resultstr = malloc((a + 1) * sizeof(char));

	if (resultstr == NULL)
	{
		free(resultstr);
		return (NULL);
	}

	for (m = n = ma = 0; ma < a; n++, ma++)
	{
		if (av[m][n] == '\0')
		{
			resultstr[ma] = '\n';
			m++;
			ma++;
			n = 0;
		}
		if (ma < a - 1)
			resultstr[ma] = av[m][n];
	}
	resultstr[ma] = '\0';

	return (resultstr);
}
