#include "lists.h"

/**
 * reverse_listint - a funct (that reverses a linked list).
 * @head: pointer to a pointer to the beginning node of the list.
 * Return: pointer to the first node of the reversed list (prev, next)
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;

	return (*head);
}
