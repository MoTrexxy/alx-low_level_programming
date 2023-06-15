#include "lists.h"

/**
 * get_dnodeint_at_index - M funct
 * @head: head of the list
 * @index: index of the nth node
 * Return: NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int m;

	if (head == NULL)
		return (NULL);

	while (head->prev != NULL)
		head = head->prev;

	m = 0;

	while (head != NULL)
	{
		if (m == index)
			break;
		head = head->next;
		m++;
	}

	return (head);
}
