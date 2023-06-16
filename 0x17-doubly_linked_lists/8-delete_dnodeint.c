#include "lists.h"

/**
 * delete_dtempint_at_index - Delete temp at nth index
 *
 * @head: Head of temp
 *
 * @index: index
 *
 * Return: 1 succeed, -1 if fail
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	if (*head == NULL)
		return (-1);
	dlistint_t *temp = *head;
	unsigned int count;

	if (index == 0)
	{
		*head = temp->next;
		if (temp->next != NULL)
			temp->next->prev = NULL;
		free(temp);
		return (1);
	}

	for (count = 0; temp != NULL && count < index - 1; count++)
		temp = temp->next;

	if (temp == NULL || temp->next == NULL)
		return (-1);

	dlistint_t *node_to_delete = temp->next;
	temp->next = node_to_delete->next;
	if (node_to_delete->next != NULL)
		node_to_delete->next->prev = temp;
	free(node_to_delete);

	return (1);
}
