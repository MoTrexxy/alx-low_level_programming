#include "main.h"

/**
* factorial - function
* @n: input number
* Return: the factorial of n
*/
int factorial(int n)
{
	if (n < 0)
	{
	return (-1);
	}
	if (n == 0)
	{
	return (1);
	}
	int fctl = 1;

	for (int m = 1; m <= n; m++)
	{
	fctl *= m;
	}
	return (fctl);
}
