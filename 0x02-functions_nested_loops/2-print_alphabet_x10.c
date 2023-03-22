#include "main.h"

/**
* print_alphabet_x10 - Check Main
* Description: function uses _putchar function to print
* alphabet in lowercase 10 times 
* Return: always 0
*/

void print_alphabet_x10(void)
{
	int i;
	char j;

	for (i = 0; i < 10; i++)
	{
		for (j = 'a'; j <= 'z';	j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}