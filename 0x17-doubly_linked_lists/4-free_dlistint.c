#include "lists.h"

/**
 * free_dlistint - Free list
 * @head: struct
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *list;
	do
	{
		list = head;
		head = head->next;
		free(list);
	} while (head);
	
}
