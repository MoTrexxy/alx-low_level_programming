#include "lists.h"

/**
 * print_listint - main funct (mot)
 * @h: pointer to the first node in the linked list
 * Return: the number of nodes (tnon)
 */
size_t print_listint(const listint_t *h)
{
	size_t tnon = 0;

	while (h)
	{
		printf("%d\n", h->n);
		tnon++;
		h = h->next;
	}

	return (tnon);
}
