#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - funct (that adds a new node at the end of a list).
 * @head: pointer to pointer
 * @n: int value
 * Return: the address of the new element (anel), or NULL if it failed.
 **/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *anel, *anel2;

	anel = malloc(sizeof(listint_t));
	if (anel == NULL)
		return (NULL);

	anel->n = n;
	anel->next = NULL;

	if (*head == NULL)
	{
		*head = anel;
		return (anel);
	}

	anel2 = *head;
	while (anel2->next)
		anel2 = anel2->next;
	anel2->next = anel;
	return (anel);
}
