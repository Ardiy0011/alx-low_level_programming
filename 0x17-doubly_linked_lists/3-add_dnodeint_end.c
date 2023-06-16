#include "lists.h"
/**
 * add_dnodeint_end - Adds a new node at the end of list using
 * @head: 1st struct
 * @n: the data
 * Return: dlistint_t
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *list = NULL, *end = *head;
	list = malloc(sizeof(dlistint_t));
	if (list == NULL)
	{
		return (NULL);
	}
	list->n = n;
	list->prev = NULL;
	list->next = NULL;

	if (*head == NULL)
	{
		*head = list;
		return (*head);
	}
	do {
		list->prev = end;
		end->next = list;
		end = end->next;
	} while (end->next != NULL);
	return (list);
}
