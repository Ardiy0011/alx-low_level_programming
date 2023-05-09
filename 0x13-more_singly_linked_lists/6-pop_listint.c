#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Delete the first element of a singly linked list.
 * @head: Pointer to a list.
 * Return: Integer if success.
 **/

int pop_listint(listint_t **head)
{
	listint_t *porary;
	int my_data;

	if (*head == NULL)
		return (0);

	porary = *head;
	*head = porary->next;
	my_data = porary->n;
	free(porary);
	return (my_data);
}
