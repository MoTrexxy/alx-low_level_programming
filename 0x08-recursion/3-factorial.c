#include "main.h"

/**
* factorial - function
* @n: input number
* Return: the factorial of n
*/
int factorial(int n)
{
	int fctl;

	if (n < 0)
	{
	return (-1);
	}
	else if (n == 0)
	{
	return (1);
	}
	else
	{
	int m;
	for (m = n; m > 0; m--)
	{
	fctl *= m;
	}
	return (fctl);
	}
}	
