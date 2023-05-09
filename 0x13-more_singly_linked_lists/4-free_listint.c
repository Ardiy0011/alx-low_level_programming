#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - Frees a list.
 * @head: Address of the first node of a list.
 **/

void free_listint(listint_t *head)
{
	listint_t *porary, *porary2;

	porary = head;
	while (porary != NULL)
	{
		porary2 = porary->next;
		free(porary);
		porary = porary2;
	}
}
