#include <stdlib.h>
#include <stdio.h>

/**
 * print_opcodes - print its own opcodes
 * @a: main function (address)
 * @n: number of bytes
 * Return: zero
 */
void print_opcodes(char *a, int n)
{
	int m;

	for (m = 0; m < n; m++)
	{
		printf("%.2hhx", a[m]);
		if (m < n - 1)
			printf(" ");
	}
	printf("\n");

}

/**
 * main - main funct
 * @argc: argument count (number)
 * @argv: argument vector (array)
 * Return: zero
 */
int main(int argc, char **argv)
{
	int n;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcodes((char *)&main, n);
	return (0);
}
