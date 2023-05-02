#include "lists.h"

/**
 * print_listint_safe - a funct (that prints a linked list)
 * @head: a pointer to the start of the linked list
 * Return: number of nodes in the list (nuon, count)
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nuon = 0;
	int count;

	while (head)
	{
		count = head - head->next;
		nuon++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (count > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}

	return (nuon);
}
