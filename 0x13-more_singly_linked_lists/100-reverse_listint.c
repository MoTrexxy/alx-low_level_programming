#include "lists.h"

/**
 * reverse_listint - a funct (that reverses a linked list.
 * @head: pointer to a pointer to the beggining node of the list.
 * Return: pointer to the first node of the reversed list (prev, next).
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev;
	listint_t *next;

	prev = NULL;
	next = NULL;

	while (*head != NULL)
	{
		n = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = n;
	}

	*head = prev;
	return (*head);
}
