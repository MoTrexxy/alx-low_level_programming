#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: head of the linked list
 * @str: string to add in the node
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t countchar;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strcpy(str);

	for (countchar = 0; str[countchar]; countchar++)
		;

	new->len = countchar;
	new->next = *head;
	*head = new;

	return (*head);
}
