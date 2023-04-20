#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - main funct that prints strings, followed by a new one
 * @separator: the string
 * @n: the number of strings passed to the function
 * Return: zero
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *string;
	unsigned int index;

	va_start(strings, n);

	for (index = 0; index < n; index++)
	{
		string = va_arg(strings, char *);

		if (string == NULL)
			printf("(nil)");
		else
			printf("%s", string);

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(strings);
}
