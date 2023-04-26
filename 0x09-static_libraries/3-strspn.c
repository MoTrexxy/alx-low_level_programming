#include "main.h"

/**
* _strspn - a function that gets the length of a prefix substring
* @s: consists only of bytes from accept
* @accept: bytes
* Return: the number of bytes in the initial segment
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int num = 0;
	int n;
	int m;

	for (m = 0; s[m]; m++)
	{

	for (n = 0; accept[n]; n++)
	{
		if (s[m] == accept[n])
		{
		num++;
		break;
		}
	}
		if (!accept[n])
		{
		return (num);
		}
	}
		return (num);
}
