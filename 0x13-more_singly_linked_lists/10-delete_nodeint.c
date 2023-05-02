#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - a funct (that deletes the node at index
 * of a linked list)
 * @head: pointer to pointer to the first linked list.
 * @index: the index that should be deleted
 * Return: 1(next) or -1(prev)
 **/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int m;
	listint_t *prev, *next;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
		return (1);
	}
	prev = *head;
	for (m = 0; m < index - 1; m++)
	{
		if (prev->next == NULL)
			return (-1);
		prev = prev->next;
	}
	next = prev->next;
	prev->next = next->next;
	free(next);
	return (1);
}
