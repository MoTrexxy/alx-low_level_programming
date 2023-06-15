#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - main funct
 * @h: pointer 
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t m;

	for (m = 0; h != NULL; m++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (m);
}
