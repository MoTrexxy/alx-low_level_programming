#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - main funct (prints anything)
 * @format: a list of types of arguments passed to the function
 * Return: zero
 */
void print_all(const char * const format, ...)
{
	va_list valist;
	unsigned int m = 0, n, c = 0;
	char *strn;
	const char t_arg[] = "cifs";

	va_start(valist, format);
	while (format && format[m])
	{
		n = 0;
		while (t_arg[n])
		{
			if (format[m] == t_arg[n] && c)
			{
				printf(", ");
				break;
			} n++;
		}
		switch (format[m])
		{
		case 'c':
			printf("%c", va_arg(valist, int)), c = 1;
			break;
		case 'm':
			printf("%d", va_arg(valist, int)), c = 1;
			break;
		case 'f':
			printf("%f", va_arg(valist, double)), c = 1;
			break;
		case 's':
			strn = va_arg(valist, char *), c = 1;
			if (!strn)
			{
				printf("(nil)");
				break;
			}
			printf("%s", strn);
			break;
		} m++;
	}
	printf("\n"), va_end(valist);
}
