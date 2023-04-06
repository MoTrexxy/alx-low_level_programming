#include "main.h"

int actual_sqrt_recursion(int n, int m);

/**
* _sqrt_recursion - function
* @n: integer
* Return: the natural square root of a number
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
* actual_sqrt_recursion - another function
* @n: integer
* @m: enumerator
* Return: the square root
*/
int actual_sqrt_recursion(int n, int m)
{
	if (m * m > n)
		return (-1);
	if (m * m == n)
		return (m);
	return (actual_sqrt_recursion(n, m + 1));
}
