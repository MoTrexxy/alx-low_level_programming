#include "main.h"

/**
* _puts - displays a string on the standard output
* @str: string to print
* Return: void
*/
void _puts(char *str)
{
	int m;

	for (m = 0; str[m] != '\0'; m++)
	{
		_putchar(str[m]);
	}
	_putchar('\n');
}
