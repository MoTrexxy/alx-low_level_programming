#include "lists.h"

/**
 * sum_listint - a funct (that returns the sum of all the data n).
 * @head: pointer to the head of the linked list.
 * Return: the sum of all the data in the linked list or zero.
 */
int sum_listint(listint_t *head)
{
	int sumdata;

	sumdata = 0;
	while (head != NULL)
	{
		sumdata += head->n;
		head = head->next;
	}

	return (sumdata);
}
