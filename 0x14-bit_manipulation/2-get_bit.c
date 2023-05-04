#include "main.h"
#include <stdio.h>
/**
 * get_bit - a funct that returns the value of a bit at a given index
 * @n: number to get the bit from
 * @index: index of the bit to get from starting from 0
 * Return: value of bit at index, or -1 if error (dexval)
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int dexval;

	if (index > 64)
		return (-1);

	dexval = n >> index;

	return (dexval & 1);
}
