#include "lists.h"

/**
 * print_dlistint - M funct
 * @h: head of the list
 * Return: the number of nodes (non)
 */
size_t dlistint_len(const dlistint_t *h)
{
	int non;

	non = 0;

	if (h == NULL)
		return (non);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		non++;
		h = h->next;
	}

	return (non);
}
