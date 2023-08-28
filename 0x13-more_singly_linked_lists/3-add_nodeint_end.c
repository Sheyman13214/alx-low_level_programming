#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - Add a new node at the end of a listint_t list.
 * @head: Pointer to a pointer to the head of the list.
 * @n: Integer value to be added in the new node.
 * Return: The address of the new element, NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *curr;

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
{
		*head = new_node;
		return (new_node);
}

	while (curr->next != NULL)
{
		curr = curr->next;
}

	curr->next = new_node;
	return (new_node);
}
