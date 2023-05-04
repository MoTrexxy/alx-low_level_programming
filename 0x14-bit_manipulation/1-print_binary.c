#include "main.h"

/**
 * print_binary - a funct that prints the binary representation of a num
 * @n: the number to be printed
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int m, num = 0;
	unsigned long int index;

	for (m = 98; m >= 0; m--)
	{
		index = n >> m;

		if (index & 1)
		{
			_putchar('1');
			num++;
		}
		else if (num)
			_putchar('0');
	}
	if (!num)
		_putchar('0');
}
