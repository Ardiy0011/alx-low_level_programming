#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - Frees a list.
 * @head: Address of the first node of a list.
 **/

void free_listint2(listint_t **head)
{
	listint_t *porary;

	if (head == NULL)
		return;
	if (*head != NULL)
	{
		porary = (*head)->next;
		free(*head);
		*head = porary;
		free_listint2(head);
	}
}
