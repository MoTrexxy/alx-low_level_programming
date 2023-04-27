#include "lists.h"

/**
 * list_len - main funct.
 * @h: singly linked list.
 * Return: number of elements in the list.
 */

size_t list_len(const list_t *h)
{
	size_t noe;

	noe = 0;
	while (h != NULL)
	{
		h = h->next;
		noe++;
	}
	return (noe);
}
