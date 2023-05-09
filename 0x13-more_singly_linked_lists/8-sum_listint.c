#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - Computes the sum of all the nodes in a list.
 * @head: Pointer to the head node of a list.
 * Return: Integer sum of the nodes.
 **/

int sum_listint(listint_t *head)
{
	int total = 0;
	listint_t *porary = head;

	while (porary != NULL)
	{
		total += porary->n;
		porary = porary->next;
	}

	return (total);
}
