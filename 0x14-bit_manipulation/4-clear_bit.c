#include "main.h"
#include <stdlib.h>

/**
 * clear_bit - a funct thatsets the value of a bit to 0 at a given index
 * @n: a pointer to the number to set
 * @index: index of the bit to set from 0
 * Return: 1 if works, -1 if it does not
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
