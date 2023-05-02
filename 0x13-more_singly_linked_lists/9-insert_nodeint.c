#include "lists.h"

/**
 * insert_nodeint_at_index - a funct (that inserts a new node at a given...
 * @head: pointer to pointer to the beginning of a linked list.
 * @idx: where the new node should be added.
 * @n: new node integer.
 * Return: the address of the new node or null if it failed (ann).
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int m;
	listint_t *ann;
	listint_t *tmp = *head;

	ann = malloc(sizeof(listint_t));
	if (!ann || !head)
		return (NULL);

	ann->n = n;
	ann->next = NULL;

	if (idx == 0)
	{
		ann->next = *head;
		*head = ann;
		return (ann);
	}

	for (m = 0; tmp && m < idx; m++)
	{
		if (m == idx - 1)
		{
			ann->next = tmp->next;
			tmp->next = ann;
			return (ann);
		}
		else
			tmp = tmp->next;
	}

	return (NULL);
}
