#include "main.h"

/**
* _strspn - gets the length of a prefix substring
* @s: string to assess
* @accept: characters to accept
* Return: the number of characters
*/
unsigned int _strspn(char *s, char *accept)
{
	int m, n, b, bool;

	b = 0;

	for (m = 0; s[m] != '\0'; m++)
	{
		bool = 0;
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (s[m] == accept[n])
			{
				b++;
				bool = 1;
			}
		}
		if (bool == 0)
		{
			return (b);
		}
	}

	return (0);
}
