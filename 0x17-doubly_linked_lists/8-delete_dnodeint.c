#include "lists.h"

/**
 * delete_dnodeint_at_index - Delete node at nth index
 * @head: Pointer to a pointer to the head node
 * @index: Index of the node to delete
 *
 * Return: 1 if successful, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	if (*head == NULL)
		return (-1);
	dlistint_t *current = *head;

	if (index == 0)
	{
		*head = current->next;
		if (current->next != NULL)
			current->next->prev = NULL;
		free(current);
		return (1);
	}

	unsigned int count;
	for (count = 0; current != NULL && count < index - 1; count++)
		current = current->next;

	if (current == NULL || current->next == NULL)
		return (-1);

	dlistint_t *node_to_delete = current->next;
	current->next = node_to_delete->next;
	if (node_to_delete->next != NULL)
		node_to_delete->next->prev = current;
	free(node_to_delete);
	return (1);
}
