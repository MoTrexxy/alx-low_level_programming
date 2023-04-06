#include "main.h"

/**
* _sqrt_recursion - function
*  @n: integer
*  Return: the natural square root of a number
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1)
		return (n);
	int root = _sqrt_recursion(n / 4) * 2;

	if ((root + 1) * (root + 1) < +n)
		return (root + 1);
	return (root);
}
