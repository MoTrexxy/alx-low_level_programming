#include "lists.h"

/**
 * pop_listint - funct (that deletes the head node of a linked list
 * @head: pointer to pointer to the head of the list
 * Return: the head node data (hndata)
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int hndata;

	if (!head || !*head)
		return (0);

	hndata = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;

	return (hndata);
}
