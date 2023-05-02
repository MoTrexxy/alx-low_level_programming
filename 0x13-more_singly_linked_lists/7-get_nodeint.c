#include "lists.h"

/**
 * get_nodeint_at_index - funct (that returns the nth node of a linked list)
 * @head: pointer to the first node in the linked list
 * @index: index of the node to return
 * Return: pointer to nth node or null if it does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int m = 0;
	listint_t *tmp = head;

	while (tmp && m < index)
	{
		tmp = tmp->next;
		m++;
	}

	return (tmp ? tmp : NULL);
}
