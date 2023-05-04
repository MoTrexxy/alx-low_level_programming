#include "main.h"

/**
 * flip_bits - number of bits needed to flip from one num to num
 * @n: number one
 * @m: number two
 * Return: number of bits (bitnum)
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i, bitnum = 0;
	unsigned long int j = sizeof(unsigned long int) * 8;

	for (i = 0; i < j; i++)
	{
		if ((m & 1) != (n & 1))
			bitnum += 1;
		n = n >> 1;
		m = m >> 1;
	}
	return (bitnum);
}
