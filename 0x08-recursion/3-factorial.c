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
	else
	{
	int fctl = 1;

	while (n > 0)
	{
	fctl *= n--;
	}
	return (fctl);
	}
}
