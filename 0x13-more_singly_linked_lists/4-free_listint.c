#include "lists.h"

/**
 * free_listint - funct (that frees a linked list)
 * @head: pointer to the head of the linked list
 * Return: zero
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
