#include <stdio.h>
#include <stdarg.h>

/**
* sum_them_all - main funct
* @n: unsigned int n
* Return: zero
*/
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int m;
	va_list arguments;

	if (n)
	{
		va_start(arguments, n);
		for (m = 0; m < n; m++)
		{
			sum += va_arg(arguments, int);
		}
		va_end(arguments);
	}
	return (sum);
}
