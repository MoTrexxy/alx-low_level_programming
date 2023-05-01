#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a linked list
 * @head: pointer to pointer to the head of the linked list
 * @n: int value to be added
 * Return: the address of the new element (anel), or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *anel;

	anel = malloc(sizeof(listint_t));
	if (!anel)
		return (NULL);

	anel->n = n;
	anel->next = *head;
	*head = anel;

	return (anel);
}
