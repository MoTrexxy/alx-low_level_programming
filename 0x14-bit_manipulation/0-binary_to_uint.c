#include "main.h"

/**
 * binary_to_uint -  funct(that converts a binary number to unsigned int)
 * @b: string containing the binary number
 * Return: the converted number (result)
 */
unsigned int binary_to_uint(const char *b)
{
	int m;
	unsigned int result = 0;

	if (!b)
		return (0);

	for (m = 0; b[m]; m++)
	{
		if (b[m] < '0' || b[m] > '1')
			return (0);
		result = 2 * result + (b[m] - '0');
	}
	return (result);
}
