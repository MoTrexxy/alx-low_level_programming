#include "lists.h"

/**
 * dlistint_len - m funct
 * @h: pointer to the beginning of a linked list
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t m;

	for (m = 0; h != NULL; m++)
		h = h->next;
	return (m);
}
