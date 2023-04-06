#include "main.h"

int actual_prime(int n, int m);

/**
* is_prime_number - main function
* @n: integer
* Return: 1 if the input integer is a prime number, if not return 0
*/
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
* actual_prime - other function
* @n: integer
* @m: enumerator
* Return: if n is a prime, return 1. if not, return 0
*/
int actual_prime(int n, int m)
{
	if (m == 1)
		return (1);
	if (n % m == 0 && m > 0)
		return (0);
	return (actual_prime(n, m - 1));
}
