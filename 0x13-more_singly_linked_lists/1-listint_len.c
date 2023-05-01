#include "lists.h"

/**
 * listint_len - funct (returns the number of elements in a linked list)
 * @h: pointer to the head of the linked list
 * Return: the number of elements (tnoe)
 */
size_t listint_len(const listint_t *h)
{
	size_t tnoe = 0;

	while (h)
	{
		tnoe++;
		h = h->next;
	}

	return (tnoe);
}
